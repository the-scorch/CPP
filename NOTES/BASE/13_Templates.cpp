#include <iostream>
using namespace std;

template <typename T> // Function Template
T myMin(T x, T y)
{
    return (x > y) ? y : x;
}

template <typename T1, typename T2 = string> // Class Template
class ID
{
    public:
    T1 a;
    T2 b;

    ID(T1 val1, T2 val2){
        a = val1;
        b = val2;
    }

    void print(){
        cout << a << " - " << b << endl;
    }
};

template <typename T3> constexpr T3 euler = T3(2.71828); //Template variable

template <typename T4, int min> int arrMax(T4 arr[], int n){ //non-type argument
    int m = min;
    for(int i=0; i<n; i++){
        if(m < arr[i]){
            m = arr[i];
        }
    }
    return m;
}

template <int N> struct Factorial //Template Metaprogramming
{
    static const int value = N * Factorial<N - 1>::value;
};
template <> struct Factorial<0>
{
    static const int value = 1;
};

int main()
{
    cout << myMin(7, 3) << endl; // auto declaration of function type
    cout << myMin<double>(14424.212, 1241512.2142) << endl;
    cout << myMin<char>('h', 'q') << "\n\n";

    ID<int> AKA(20, "Ashitabh Srivastava");
    ID<string> AKA1("21/03/2005","Birth Day");

    AKA.print();
    AKA1.print();

    cout << endl << euler<int> << "\t" << euler<float> << "\n\n";

    int arr[4] = {5, 2, 8, 4};
    int n = 4;
    char arr1[5] = {'a', 'g', 'y', 'q', 'i'};
    int n1 = 5;

    cout << arrMax<int, 2>(arr, n) << "\t" << arrMax<char, 'a'>(arr1, n1) << "\n\n";

    cout << "Factorial of 5 is: " << Factorial<5>::value;

    return 0;
}