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
        cout << "\n\tWelcome to TRADULATOR V2! (Min Sell Edition)\n\n";

        double buy;
        cout << "Enter Buy Value: ";
        cin >> buy;

        double minp;
        cout << "Enter Desired Profit: ";
        cin >> minp;

        // string platform;
        // cout << "Trading Platform (e.g., Groww, IND Money): ";
        // cin.ignore();
        // getline(cin, platform);

        // if (ptf == "IND Money" || ptf == "Groww")
        // {
        double low = buy;
        double high = buy * 2;
        double minsell = 0;

        while (high - low >= 0.01)
        {
            double mid = (high + low) / 2;
            
        double stt = 0.001 * mid;                              // STT on sell value
        double exchangeFee = 0.0000325 * (buy + mid);          // Exchange fee on turnover
        double sebiFee = 0.000002 * (buy + mid);               // SEBI fee on turnover
        double dpCharge = 18.25;                                // DP charge per sell
        double gst = 0.18 * (exchangeFee + sebiFee + dpCharge); // GST 18% on exch+sebi+DP
        double c = (stt + exchangeFee + sebiFee + dpCharge + gst);

            double a = mid - c;
            double p = a - buy;
            double t = 0.15 * p;
            double netp = p - t;

            if(netp >= minp)
            {
                high = mid;
                minsell = mid;
            }
            else
            {
                low = mid;
            }
        }

        cout << fixed << setprecision(2);
        cout << "\nMin Sell Value = " << minsell;

        cout << "\n%Move = " << ((minsell - buy) / buy)*100;

        cout << "\n\nRe-Evaluate?? (y/n): ";
        cin >> choice;
        // }
    } while (choice == 'y' || choice == 'Y');

    return 0;
}