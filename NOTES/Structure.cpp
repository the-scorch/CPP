#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    // Structure

    struct
    {
        int nums2;    // Member 1
        string words; // Member 2
    } myStruct;       // Structure variable

    myStruct.nums2 = 7;
    myStruct.words = "Scorch";

    cout << myStruct.nums2 << "\t";
    cout << myStruct.words << "\n\n";

    struct Rich
    { // Structure Name
        string name;
        int age;
        string networth;
    };

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

    // Enumeration - group of Constants
    enum Level
    {
        LOW = 1,
        MEDIUM,
        HIGH
    };

    // Enum Variable

    enum Level var = MEDIUM;
    cout << var << "\t";

    switch (var)
    {
    case 1:
        cout << "Difficuly = Rookie\n\n";
        break;

    case 2:
        cout << "Difficuly - Soldier\n\n";
        break;

    case 3:
        cout << "Difficuly - Veteran\n\n";
        break;
    }

    return 0;
}