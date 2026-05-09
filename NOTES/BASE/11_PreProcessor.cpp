#include <iostream>
#define PI 3.14                            // Object Macro
#define PRINT(x) cout << "Value is: " << x // Function Macro
#define DEBUG                              // Conditional Macro

using i = int;       // creating alias for data type
using namespace std; // using whole namespace
namespace R1         // creating namespace
{
    void greet()
    {
        std::cout << "\nWelcome from Room 1" << std::endl;
    }
}
namespace R2
{
    void greet()
    {
        std::cout << "Welcome from Room 2" << "\n\n";
    }
}
namespace area
{
    void fun()
    {
        cout << "Using function from AREA namespace!" << "\n\n";
    }
}
using area::fun; // only using one thing
namespace outer
{
    void fun1()
    {
        cout << "Accessing from Outer namespace." << endl;
    }
    namespace inner
    {
        void fun2()
        {
            cout << "Accessing from Inner namespace." << "\n\n";
        }
    }
}
namespace version
{
    void fun3()
    {
        cout << "This is the Base Function." << endl;
    }
}
namespace version // extending namespace
{
    void fun4()
    {
        cout << "This is the Added Function." << "\n\n";
    }
}
namespace v = version; // creates alias
inline namespace space // direct access
{
    void fun5()
    {
        cout << "This function is from Inline namespace." << endl;
    }
}

int n = 21; // global namespace

int main()
{

    int r;
    cout << "\nEnter Radius of Circle: ";
    cin >> r;
    cout << "Area of Circle is: " << PI * r * r << "\n\n";

    int n;
    cin >> n;
    PRINT(n);

    int x = 5, y = 10;
    int sum = x + y;
// This block will only be compiled if DEBUG is defined
#ifdef DEBUG
    cout << "[DEBUG] x = " << x << endl;
    cout << "[DEBUG] y = " << y << endl;
    cout << "[DEBUG] sum = " << sum << endl;
#endif

    cout << "This is line " << __LINE__ << " in file " // Pre-Defined Macros
         << __FILE__ << "\n";
    cout << "Compiled on " << __DATE__;

    i num = 5;
    cout << num << '\n';

    R1::greet(); // access function from namepace
    R2::greet();

    fun();

    outer::fun1();
    outer::inner::fun2();

    int n = 19;
    cout << n << "\t" << ::n << "\n\n";

    v::fun3();
    v::fun4();

    fun5();

    return 0;
}