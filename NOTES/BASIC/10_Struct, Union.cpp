#include <iostream>
#include <string>
#include <cmath>
using namespace std;

struct S // used to group different data types
{
    int nums2;    // Member 1
    string words; // Member 2
};

struct Rich
{
    string name;
    int age;
    string networth;
};

union U // Union - used to mix different data types
{
    int i;  // Both members
    char c; // share same memory space
};

int main()
{

    S myStruct; // Structure variable
    myStruct.nums2 = 7;
    myStruct.words = "Scorch";

    cout << myStruct.nums2 << "\t";
    cout << myStruct.words << "\n\n";

    Rich rich1;
    rich1.name = "Anshuman Srivastava";
    rich1.age = 22;
    rich1.networth = "$11.2 Million";

    Rich rich2;
    rich2.name = "Ashitabh Srivastava";
    rich2.age = 25;
    rich2.networth = "$11.1 Million";

    cout << "The Year 2030 :\n"
         << rich1.name << "\t" << rich1.age << "\t" << rich1.networth << "\n"
         << rich2.name << "\t" << rich2.age << "\t" << rich2.networth << "\n\n";

    U myUnion; // Union variable

    myUnion.c = 'A';

    cout << "myUnion.i: " << myUnion.i << endl;
    cout << "myUnion.c: " << myUnion.c << "\n\n";

    typedef int i; // made i an alias of integer
    
    i num = 21;
    cout << num << "\t";

    using deci = float;

    deci decimals = 3.14;
    cout << decimals << "\n\n";

    return 0;
}