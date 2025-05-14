#include <iostream>
#include <string>
#include <cmath>
#include <iomanip> //For setprecision
using namespace std;

int main()
{

    // C++ Math Functions

    cout << "10 Divided by 3, Quotient: " << (int)10 / 3 << "\n\n";

    cout << "10 Divided by 3, Quotient: " << (double)10 / 3 << "\n\n";

    cout << "10 Divided by 3, Remainder: " << 10 % 3 << "\n\n";

    cout << "Max of Two: " << max(20, 74) << "\t" << min(-2, -4) << "\n\n";

    cout << "Square Root of 4761: " << sqrt(4761) << "\n\n";

    cout << "Rounding of 53.456: " << round(53.456) << "\n\n";

    cout << "Natural Logarithm of 9: " << log(9) << "\n\n";

    cout << "Absoulte Value of -7: " << abs(-7) << "\n\n"; // gives absolute value

    double pi = 3.14159265358979323846;
    cout << "Pi value upto 5 Decimal Places: " << fixed << setprecision(5) // for setting decimal places
         << pi << "\n\n";

    return 0;
}