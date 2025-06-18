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
            
            double c = 0;
            c += 0.0012 * mid;
            c += 20;
            c += 18.5;
            c += 0.18 * c;

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