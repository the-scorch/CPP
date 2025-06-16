#include <iostream>
#include <string>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    char ask;
    do
    {
        cout << "\n\tWelcome to TRADULATOR!!\n\n";

        double buy;
        cout << "Enter Buy Value: ";
        cin >> buy;

        double sell;
        cout << "Enter Sell Value: ";
        cin >> sell;

        // string ptf;
        // cout << "Type the Trading Platform: ";
        // cin.ignore(); // To ignore the newline character left in the input buffer
        // getline(cin, ptf);

        // if (ptf == "IND Money" || ptf == "Groww")
        // {
        double c = 0; // Charges
        c += 0.0012 * sell;    // Others
        c += 20;            // Brokerage
        c += 18.5;          // DP
        c += 0.18 * c;      // GST on Charges

        cout << "\nCharges = " << c;

        double a = sell - c;
        cout << "\n\n\tNet Amount = " << a;

        double p = a - buy;
        cout << "\n\n\tProfit = " << p;

        double t = 0.15 * p; // Short-Term CG Tax of India
        cout << "\n\nTaxes = " << t;

        cout << fixed << setprecision(2);
        cout << "\n\n\tNet Profit = " << p - t << "\n\n";

        cout << "Re-Evaluate?? (y/n): ";
        cin >> ask;
        // }
    } while (ask == 'y' || ask == 'Y');

    return 0;
}