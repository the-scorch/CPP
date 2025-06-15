#include <iostream>
#include <string>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    char b;
    do
    {
        cout << "\n\tWelcome to Tradulator!!\n\n";

        double i;
        cout << "Enter the Buy Value: ₹";
        cin >> i;

        double s;
        cout << "Enter the Sell Value: ₹";
        cin >> s;

        // string ptf;
        // cout << "Type the Trading Platform: ";
        // cin.ignore(); // To ignore the newline character left in the input buffer
        // getline(cin, ptf);

        // if (ptf == "IND Money" || ptf == "Groww")
        // {
        const double c = 0; // Charges
        c += 0.0012 * s;    // Others
        c += 20;            // Brokerage
        c += 18.5;          // DP
        c += 0.18 * c;      // GST on Charges

        cout << "\nCharges = ₹" << c;

        double a = s - c;
        cout << "\n\n\tNet Amount = ₹" << a;

        double p = a - i;
        cout << "\n\n\tProfit = ₹" << p;

        double t = 0.15 * p; // Short-Term CG Tax of India
        cout << "\n\nTaxes = ₹" << t;

        cout << fixed << setprecision(2);
        cout << "\n\n\tNet Profit = ₹" << p - t << "\n\n";

        cout << "Re-Evaluate?? (y/n): ";
        cin >> b;
        // }
    } while (b == 'y' || b == 'Y');

    return 0;
}