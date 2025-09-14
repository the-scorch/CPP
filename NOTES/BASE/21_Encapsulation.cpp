#include <iostream>
using namespace std;

class Employee
{
private: // can't be accessed outside the class
    int income;

public:
    void setIncome(int i) // Setter - to set private members
    {
        income = i;
    }
    int getIncome() // Getter - to access private members
    {
        return income;
    }
};

int main()
{
    // Encapsulation - accessing private members
    Employee person1;
    person1.setIncome(65000);

    Employee person2;
    person2.setIncome(80000);

    cout << "Pranaw Prakash ~ " << person1.getIncome() << "\n"
         << "Harsh Gupta ~ " << person2.getIncome() << "\n\n";

    return 0;
}