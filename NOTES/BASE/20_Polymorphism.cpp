#include <bits/stdc++.h>
using namespace std;

// Static Polymorphism (Compile-time)
class Function // Function Overloading
{
public:
    void sum(int a, int b)
    {
        cout << "Integer Sum: " << a + b << endl;
    }
    void sum(double a, double b)
    {
        cout << "Float Sum: " << a + b << "\n\n";
    }
};

class Complex // Operator Overloading
{
public:
    int real, img;
    Complex(int r, int i)
    {
        real = r;
        img = i;
    }
    Complex operator+(const Complex &num)
    {
        return Complex(real + num.real, img + num.img);
    }
};

// Dynamic Polymorphism (Run-time)
class Animal
{
public:
    virtual void sound() // function may be redefined in derived class
    {
        cout << "Animal Sound!\n";
    }
    virtual ~Animal(){}
};

class Dog : public Animal
{
public:
    void sound() override
    {
        cout << "woof woof!\n";
    }
};

class Cat : public Animal
{
public:
    void sound() override
    {
        cout << "meow meow!\n";
    }
};

class Lion : public Animal
{
public:
    void sound() override
    {
        cout << "rooaaaarrr!\n\n";
    }
};

int main()
{
    Function obj;
    obj.sum(4, 6);
    obj.sum(42.65, 45.21);

    Complex c1(12, 5);
    Complex c2(7, 2);
    Complex c3 = c1 + c2;
    cout << "Sum of Two Complex Nums: " << c3.real << " + i" << c3.img << "\n\n";

    Animal myanimal;
    Dog gshepherd;
    Cat beluga;
    Lion sherkhan;
    myanimal.sound();
    gshepherd.sound();
    beluga.sound();
    sherkhan.sound();

    Animal *animalPtr = new Dog();                // Base class pointer to derived class
    Dog *dogPtr = dynamic_cast<Dog*>(animalPtr); // Downcasting - Base class pointer to Derived class pointer
    if (dogPtr)                                   // check typecasting
    {
        dogPtr->sound();
    }
    else
    {
        cout << "Failed to cast to Dog." << endl;
    }
    Cat *catPtr = dynamic_cast<Cat *>(animalPtr);
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