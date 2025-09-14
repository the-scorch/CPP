#include <bits/stdc++.h>
using namespace std;

class car
{
public: // anyone can access
    string name;
    void specs(int tspeed) // Function/Method - inside class
    {
        cout << "The car of " << name << " company has a Top speed of " << tspeed << " km/h.\n";
    }
    void wmodel(string model);
};
void car::wmodel(string model) // defined outside class
{
    cout << "The Best car model of this company is " << model << "!\n\n";
}

class Game
{
public:
    string name;
    int year;
    string company;
    Game(string x, int y, string z) // Constructor - auto-initializes values
    {
        name = x;
        year = y;
        company = z;
    }
    void display()
    {
        cout << name << " was released by " << company << " (" << year << ").\n";
    }
};

class Box
{
    int length;

public:
    Box(int l) : length(l) {}
    Box(const Box &other) // Copy constructor
    {
        length = other.length;
        cout << "Copy constructor called!\n";
    }
    int getLength() { return length; }
};

int main()
{
    // Objects
    car motor1;
    motor1.name = "Koenigsegg";
    motor1.specs(330);
    motor1.wmodel("Koenigsegg Jesko Absolut");
    car motor2;
    motor2.name = "BMW";
    motor2.specs(250);
    motor2.wmodel("BMW M5 Competition");
    cout << endl;

    // Using Constructor
    Game fun1("IGI", 2000, "InnerLoop Studios");
    Game fun2("COD", 2003, "Acitvision");
    Game fun3("GTA SA", 2004, "Rockstar Games");
    Game fun4("AC", 2007, "Ubisoft Montreal");
    fun1.display();
    fun2.display();
    fun3.display();
    fun4.display();
    cout << endl;

    Box b1(10);                       // Normal constructor
    Box b2 = b1;                      // Copy constructor called
    cout << b2.getLength() << "\n\n"; // Output: 10

    return 0;
}