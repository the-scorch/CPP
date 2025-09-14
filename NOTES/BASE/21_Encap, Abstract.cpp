#include <bits/stdc++.h>
using namespace std;

// Encapsulation - capsuling information as required
class Employee
{
private: // can't be accessed outside the class
    int income;

public:
    void setIncome(int i) // Setter
    {
        income = i;
    }
    int getIncome() // Getter
    {
        return income;
    }
};

// Abstraction - only show needed information
class Car
{
private:
    int distance = 40, petrol = 10;

public:
    void mileage()
    {
        cout << "The Mileage of car is: " << distance / petrol << "kmpl!" << endl;
    }
};

int main()
{
    Employee p1;
    p1.setIncome(85000);
    Employee p2;
    p2.setIncome(80000);

    cout << "The salary of Pranaw Prakash: " << p1.getIncome() << endl
         << "The salary of Harsh Gupta: " << p2.getIncome() << "\n\n";

    Car bugatti;
    bugatti.mileage();

    return 0;
}