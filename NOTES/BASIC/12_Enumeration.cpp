#include <iostream>
#include <string>
using namespace std;

enum Level // group a named integer constants
{
    LOW = 1,
    MEDIUM = 2,
    HIGH = 3,
    LETHAL = 4
};

int main()
{
    Level var = MEDIUM; // Enum Variable
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

    typedef int i; // made i an alias of integer
    i num = 21;
    cout << num << "\t";

    using deci = float; // made deci an alias of float
    deci decimals = 3.14;
    cout << decimals << "\n\n";

    return 0;
}