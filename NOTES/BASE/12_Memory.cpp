#include <iostream>
#include <memory>
using namespace std;

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

    int *ptr = nullptr;
    ptr = new int(7); // allocating memory
    cout << *ptr << "\t" << ptr << "\n\n";
    delete ptr; // deallocating

    int *aptr = nullptr;
    aptr = new int[5]{4, 7, 2, 9, 5};
    for (int i = 0; i < 5; i++)
        cout << aptr[i] << "\t";
    delete[] aptr;

    int X = 75;
    cout << "\n\n" << "Before Placement New: " << endl << "Value : " << X << endl << "Memory Address: " << &X << "\n\n";
    int *xptr = new (&X) int(57);//placement new - stores at same address, delete using Destructor
    cout << "After Placement New: " << endl << "Value : " << X << endl << "Memory Address: " << xptr << "\n\n";

    // Smart pointers - manages the memory allocation
    unique_ptr <Rect> R1(new Rect(7, 4)); //stores only one at once
    cout << R1->area() << "\t";
    
    unique_ptr <Rect> R2;
    R2 = move(R1);//tranfering ownership
    cout << R2->area() << "\n\n";

    shared_ptr <Rect> R3(new Rect(2, 5));//can be shared
    shared_ptr <Rect> R4;
    R4 = R3;
    cout << R3->area() << "\t" << R4->area() << "\t" << R3.use_count() << "\n\n";

    weak_ptr <Rect> R5(R3); // only connects
    cout << R5.use_count() << "\n\n";

    return 0;
}