#include <iostream>
#include <string>
using namespace std;

// Classes

class laptop
{
public: // can be accessed anywhere
	string name;
	string model;
	int price;
};

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

class Class1
{
public:
	void method1() // Method - inside class
	{
		cout << "Hello Guys!";
	}

	void method2();
};

void Class1::method2() // Method - outside class
{
	cout << "\t" << "Hello Guys..again!";
}

class car
{
public:
	string name;
	int tspeed;
	int specs()
	{
		cout << "The car of " << name << " company has a Top speed of " << tspeed << " km/h.\n";

		return 0;
	}
};

class Game
{
public:
	string name;
	int year;
	string company;

	Game(string x, int y, string z) // Constructor - auto-initializes the values
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

// Inheritance

class Parent1 // 1st Base Class
{
public:
	string name1 = "Father";

protected: // can only be accessed by derived class
	void status()
	{
		cout << "Family Members - ";
	}
};

class Parent2 // 2nd Base Class
{
public:
	string name2 = "Mother";
};

class Child : public Parent1, public Parent2 // Derived Class - from Multiple
{
public:
	string name3 = "Daughter";

	void usestatus()
	{
		status();
	}
};

class Grandchild : public Child // Derived Class - Multilevel
{
public:
	string name4 = "Grand Son";
};

// Polymorphism

class Animal // Base class
{
public:
	virtual void sound() // function may be redefined in derived class
	{
		cout << "Animal Sound!\n";
	}
};

class Dog : public Animal // Derived Class
{
public:
	void sound() override
	{
		cout << "woof woof!\n";
	}
};

class Cat : public Animal // Derived Class
{
public:
	void sound() override
	{
		cout << "meow meow!\n";
	}
};

class Lion : public Animal // Derived Class
{
public:
	void sound() override
	{
		cout << "rooaaaarrr!\n\n";
	}
};

int main()
{

	// Objects

	laptop lap1;
	lap1.name = "1) Asus ROG -";
	lap1.model = " Strix G 16 = ";
	lap1.price = 160000;

	laptop lap2;
	lap2.name = "2) hp -";
	lap2.model = " Z Book Firefly = ";
	lap2.price = 150000;

	cout << lap1.name << lap1.model << lap1.price << "\n";

	cout << lap2.name << lap2.model << lap2.price;

	cout << "\n\n";

	// Encapsulation - accessing private members

	Employee person1;
	person1.setIncome(65000);

	Employee person2;
	person2.setIncome(80000);

	cout << "Pranaw Prakash ~ " << person1.getIncome() << "\n"
		 << "Harsh Gupta ~ " << person2.getIncome() << "\n\n";

	// Using Methods

	Class1 objy;
	objy.method1();
	objy.method2();

	cout << "\n\n";

	// Example of Class with Function

	car motor1;
	motor1.name = "Koenigsegg";
	motor1.tspeed = 330;

	motor1.specs();

	car motor2;
	motor2.name = "BMW";
	motor2.tspeed = 250;

	motor2.specs();

	cout << "\n";

	// Using Constructor

	Game fun1("IGI", 2000, "InnerLoop Studios");

	Game fun2("COD", 2003, "Acitvision");

	Game fun3("GTA SA", 2004, "Rockstar Games");

	Game fun4("AC", 2007, "Ubisoft Montreal");

	fun1.display();
	fun2.display();
	fun3.display();
	fun4.display();

	cout << "\n";

	// Using Inheritance

	Child member;
	Grandchild member1;
	member.usestatus();

	cout << member.name1 << " & " << member.name2 << ", " << member.name3 << " & " << member1.name4 << "!\n\n";

	// Polymorphism

	Animal myanimal;
	Dog gshepherd;
	Cat beluga;
	Lion sherkhan;

	myanimal.sound();
	gshepherd.sound();
	beluga.sound();
	sherkhan.sound();

    Animal* animalPtr = new Dog(); // Base class pointer to derived class object

    Dog* dogPtr = dynamic_cast<Dog*>(animalPtr); // Downcasting - Base class pointer to Derived class pointer

    if (dogPtr) { // check typecasting
        dogPtr->sound();
    }
    else {
        cout << "Failed to cast to Dog." << endl;
    }

    Cat* catPtr = dynamic_cast<Cat*>(animalPtr); // Typecasting to other dervied class
    if (catPtr) {
        catPtr->sound();
    }
    else {
        cout << "Failed to cast to Cat." << endl;
    }

    delete animalPtr; // delete the allocation to avoid memory leaks

	return 0;
}