#include <iostream>
#include <string>
#include <map>
using namespace std;

enum Level // group a named integer constants
{
    LOW = 1,
    MEDIUM = 2,
    HIGH = 3,
    LETHAL = 4
};

enum class Month{ // Enum Class
    Jan = 1, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec
};

int func(int u, int v){
    return (u*v)*10;
}

int (*funptr)(int, int); // Normal function pointer

typedef int (*fp)(int, int); // using typdef

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

    Month end = Month::Dec; // object of enum class
    cout << static_cast<int>(end) << "\n\n";

    typedef int i; // made i an alias of integer
    i num = 21;
    using deci = float; // another way
    deci decimals = 3.14;
    cout << num << "\t" << decimals << "\n\n";

    typedef map<int, string> mp; // can even sepcify parameters like size and type
    mp gfg {{1, "Geeks"}, {2, "For"}, {3, "Geeks"}};
    for(auto& m : gfg){
        cout << m.first << "\t" << m.second << endl;
    }

    int a = 20;
    int b = 18;
    typedef int* iPtr;
    iPtr ptra = &a;
    iPtr ptrb = &b;
    cout << "\nMemory Address of a = " << ptra << "\nAnd Value of b = " << *ptrb << "\n\n";

    funptr = &func;
    fp funptr1 = &func;

    int p = (*funptr)(5, 6);
    int q = (*funptr1)(9, 2);

    cout << p << " " << q << "\n\n";

    return 0;
}