#include <bits/stdc++.h>
using namespace std;

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
    Animal myanimal;
    Dog gshepherd;
    Cat beluga;
    Lion sherkhan;

    myanimal.sound();
    gshepherd.sound();
    beluga.sound();
    sherkhan.sound();

    Animal *animalPtr = new Dog(); // Base class pointer to derived class object

    Dog *dogPtr = dynamic_cast<Dog *>(animalPtr); // Downcasting - Base class pointer to Derived class pointer

    if (dogPtr) // check typecasting
    {
        dogPtr->sound();
    }
    else
    {
        cout << "Failed to cast to Dog." << endl;
    }

    Cat *catPtr = dynamic_cast<Cat *>(animalPtr); // Typecasting to other dervied class
    if (catPtr)
    {
        catPtr->sound();
    }
    else
    {
        cout << "Failed to cast to Cat." << endl;
    }

    delete animalPtr; // delete the allocation to avoid memory leaks
    return 0;
}