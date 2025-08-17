#include <iostream>
#include <string>
using namespace std;

struct S // group different data types
{
    int nums2;    // Both members
    string words; // have different memory space
};

struct Rich
{
    string name;
    int age;
    string networth;
};

struct Num
{
private:
    int p, q;

public:
    Num(int a, int b) // Constructor
    {
        p = a;
        q = b;
    }

    void printsum() // Member Function
    {
        cout << p << "+" << q << " = " << p + q << "\n\n";
    }

    ~Num() // Destructor
    {
        cout << "\nDestroyed Num vars using Destructor!\n";
    }
};

struct Outer
{
    struct Inner // Nested Structure
    {
        int i1, i2;
    } in;
    int o1, o2;
};

struct Spointer
{
    int i3;
    void print(){
        cout << i3 << endl;
    }
};


int main()
{

    S myStruct = {7, "Scorch"}; // Structure variable
    cout << myStruct.nums2 << "\t" << myStruct.words << "\n\n";

    Rich rich1 = {"Anshuman Srivastava", 22, "$11.2 Million"};
    Rich rich2 = {"Ashitabh Srivastava", 25, "$11.1 Million"};
    cout << "The Year 2030 :\n"
         << rich1.name << "\t" << rich1.age << "\t" << rich1.networth << endl
         << rich2.name << "\t" << rich2.age << "\t" << rich2.networth << "\n\n";

    rich1.age = 32; // modifying member values
    rich2.age = 35;
    rich1.networth = "$51.2 Million";
    rich2.networth = "$51.1 Million";
    cout << "The Year 2040: \n"
         << rich1.name << "\t" << rich1.age << "\t" << rich1.networth << endl
         << rich2.name << "\t" << rich2.age << "\t" << rich2.networth << "\n\n";

    Num n1(5, 2);
    n1.printsum();

    cout << sizeof(S) << "\t" << sizeof(Rich) << "\n\n";

    Outer obj = {{0, 1}, 6, 7};
    cout << "Inner: " << obj.in.i1 << " " << obj.in.i2 << endl
         << "Outer: " << obj.o1 << " " << obj.o2 << "\n\n";

    Spointer obj1 = {21};
    Spointer *sptr = &obj1; //Structure Pointer

    sptr->print(); // accessing the structure pointer

    return 0;
}