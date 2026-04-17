#include <iostream>
#include <memory>
using namespace std;

// Static Memory allocation = Stack (Smaller - Compile Time)
// Dynamic Memory allocation = Heap (Larger - Run Time)

class Rect
{
    int length;
    int breadth;

public:
    Rect(int l, int b)
    {
        length = l;
        breadth = b;
    }
    int area()
    {
        return length * breadth;
    }
};

int main()
{

    int *e = new (nothrow) int; // check for bad_allocation exception
    if (!e)
    {
        cout << "\nMemory Allocation Failed!\n\n";
        exit(0); // stops further execution
    }

    int *ptr = nullptr; // allocates in Stack memory
    ptr = new int(7);   // allocating in Heap memory
    cout << *ptr << '\t' << ptr << "\n\n";
    delete ptr; // deallocating

    int X = 75;
    cout << "\n\nBefore Placement New:"
         << "\nValue : " << X
         << "\nMemory Address: " << &X << "\n\n";
    int *xptr = new (&X) int(57); // placement new - stores at same address, delete using Destructor
    cout << "After Placement New: "
         << "\nValue : " << X
         << "\nMemory Address: " << xptr << "\n\n";

    // Variable Size Array (VLA) - 1D
    int *aptr = new int[5]{4, 7, 2, 9, 5};
    for (int i = 0; i < 5; i++)
        cout << aptr[i] << '\t';
    delete[] aptr; // releasing memory

    // Dynamic 2D Array
    int row, col;
    cout << "Enter the no. of Rows & Columns of Matrix: ";
    cin >> row >> col;

    int **arr = new int *[row]; // making rows starting
    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[col]; // extending rows for columns
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j];
        }
    }

    for (int i = 0; i < row; i++)
    {
        delete[] arr[i]; // release columns first
    }
    delete[] arr; // release row

    // Jagged 2D Array
    int row = 3;
    int **arr = new int *[row];
    arr[0] = new int[1];
    arr[1] = new int[2];
    arr[2] = new int[3];

    arr[0][0] = 2;
    arr[1][0] = 3;
    arr[1][1] = 8;
    arr[2][0] = 7;
    arr[2][1] = 1;
    arr[2][2] = 9;

    cout << arr[0][0] << '\n'
         << arr[1][0] << ' ' << arr[1][1] << '\n'
         << arr[2][0] << ' ' << arr[2][1] << ' ' << arr[2][2];

    for(int i=0; i < row; i++){
        delete [] arr[i];
    }
    delete [] arr;

    // Smart pointers - automatically manages memory allocation
    unique_ptr<Rect> R1(new Rect(7, 4)); // stores only one at once
    cout << R1->area() << '\t';
    unique_ptr<Rect> R2;
    R2 = move(R1); // tranfering ownership
    cout << R2->area() << "\n\n";

    shared_ptr<Rect> R3(new Rect(2, 5)); // can be shared
    shared_ptr<Rect> R4;
    R4 = R3;
    cout << R3->area() << '\t' << R4->area() << '\t' << R3.use_count() << "\n\n";

    weak_ptr<Rect> R5(R3); // only connects
    cout << R5.use_count() << "\n\n";

    return 0;
}