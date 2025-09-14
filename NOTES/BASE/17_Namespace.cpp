#include <iostream>

namespace R1
{ // creating namespace
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

using namespace std; // using whole namespace

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

int n = 21; // global namespace

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

int main()
{

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