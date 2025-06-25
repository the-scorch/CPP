#include <iostream>
#include <string>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    char choice;
    do
    {
        cout << "\n\tWelcome to TRADULATOR!!\n\n";

        double buy;
        cout << "Enter Buy Value: ";
        cin >> buy;

        char ask;
        cout << "%Profit or Sell Value?? (p/s): ";
        cin >> ask;

        double sell;
        if( ask == 'p')
        {
        double p;
        cout << "Enter the %Profit: ";
        cin >> p;
        sell = buy + ((p/100) * buy);
        }
        else if(ask == 's')
        {
        cout << "Enter Sell Value: ";
        cin >> sell;
        }

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

        double pr = a - buy;
        cout << "\n\n\tProfit = " << pr;

        double t = 0.15 * pr; // Short-Term CG Tax of India
        cout << "\n\nTaxes = " << t;

        cout << fixed << setprecision(2);
        cout << "\n\n\tNet Profit = " << pr - t << "\n\n";

        double ans = pr - t;
        if(ans > 50)
        {
            cout << "You can Sell It!" << "\n\n";
        }

        cout << "Re-Evaluate?? (y/n): ";
        cin >> choice;
        // }
    } while (choice == 'y' || choice == 'Y');

    return 0;
}