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
        if (ask == 'p')
        {
            double p;
            cout << "Enter the %Profit: ";
            cin >> p;
            sell = buy + ((p / 100) * buy);
        }
        else if (ask == 's')
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
        double stt = 0.001 * sell;                              // STT on sell value
        double exchangeFee = 0.0000325 * (buy + sell);          // Exchange fee on turnover
        double sebiFee = 0.000002 * (buy + sell);               // SEBI fee on turnover
        double dpCharge = 18.25;                                // DP charge per sell
        double gst = 0.18 * (exchangeFee + sebiFee + dpCharge); // GST 18% on exch+sebi+DP
        double c = (stt + exchangeFee + sebiFee + dpCharge + gst);
        cout << fixed << setprecision(2);
        cout << "\nCharges = " << c;

        double a = sell - c;
        cout << fixed << setprecision(2);
        cout << "\n\n\tNet Amount = " << a;

        double pr = a - buy;
        cout << fixed << setprecision(2);
        cout << "\n\n\tProfit = " << pr;

        double t = (0.15 * pr) + (0.04 * (0.15 * pr)); // STCG Tax + Cess | Welcome to INDIA : )
        cout << fixed << setprecision(2);
        cout << "\n\nTaxes = " << t;

        cout << fixed << setprecision(2);
        cout << "\n\n\tNet Profit = " << pr - t << "\n\n";

        cout << "Re-Evaluate?? (y/n): ";
        cin >> choice;
        // }
    } while (choice == 'y' || choice == 'Y');

    return 0;
}