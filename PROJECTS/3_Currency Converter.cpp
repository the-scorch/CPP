#include <iostream>
#include <iomanip>
#include <map>
#include <string>

int main() {
    std::map<std::string, double> rates = {
        {"USD", 1.0},
        {"EUR", 0.92},
        {"GBP", 0.78},
        {"JPY", 157.0},
        {"INR", 83.0}
    };

    std::string from, to;
    double amount;

    std::cout << "Available currencies: ";
    for (const auto& pair : rates) std::cout << pair.first << " ";
    std::cout << "\nEnter source currency code: ";
    std::cin >> from;
    std::cout << "Enter target currency code: ";
    std::cin >> to;
    std::cout << "Enter amount: ";
    std::cin >> amount;

    if (rates.count(from) == 0 || rates.count(to) == 0) {
        std::cout << "Invalid currency code.\n";
        return 1;
    }

    double usd = amount / rates[from];
    double converted = usd * rates[to];

    std::cout << std::fixed << std::setprecision(2);
    std::cout << amount << " " << from << " = " << converted << " " << to << "\n";

    return 0;
}