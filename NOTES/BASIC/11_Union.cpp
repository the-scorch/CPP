#include <iostream>
#include <string>
using namespace std;

union U // group different data types
{
    int i;  // Both members
    char c; // share same memory space
};

int main()
{
    U myUnion; // Union variable
    myUnion.i = 21;
    myUnion.c = 'A';

    cout << "myUnion.i: " << myUnion.i << endl << "myUnion.c: " << myUnion.c << "\n\n";

    return 0;
}