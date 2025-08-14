#include <iostream>
#include <string>
using namespace std;

enum Level // Enumeration - define a set of named integer constants
{
    LOW = 1,
    MEDIUM,
    HIGH,
    LETHAL
};

int main()
{
    enum Level var = MEDIUM; // Enum Variable
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

    case 4:
        cout << "Difficuly - Death\n\n";
        break;
    }

    return 0;
}