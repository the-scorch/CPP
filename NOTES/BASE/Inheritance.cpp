#include <bits/stdc++.h>
using namespace std;

class Vehicle // Base Class
{
public:
	Vehicle()
	{
		cout << "This is a Vehicle!" << endl;
	}
};
class car : public Vehicle // Single Inheritance
{
public:
	car()
	{
		cout << "This Vehicle is a car!" << "\n\n";
	}
};
class bike : public Vehicle // Hierarchical Inheritance
{
public:
	bike()
	{
		cout << "This Vehicle is a bike!" << "\n\n";
	}
};

class Parent1 // 1st Base Class
{
public:
	string name1;
	Parent1(string s1)
	{
		name1 = s1;
	}
	string namea = "Man!";

protected: // derived class can only access
	void status1()
	{
		cout << name1 << " is now the " << namea << endl;
	}
};
class Parent2 // 2nd Base Class
{
public:
	string name2;
	Parent2(string s2)
	{
		name2 = s2;
	}
	string nameb = "Women!";

protected:
	void status2()
	{
		cout << name2 << " is now the " << nameb << endl;
	}
};

class child : public Parent1, public Parent2 // Multiple Inheritance
{
public:
	string name3;
	child(string s3, string s1, string s2) : Parent1(s1), Parent2(s2)
	{
		name3 = s3;
	}
	string namec = "Daughter!";
	void usestatus()
	{
		status1();
		status2();
	}
	void status3()
	{
		cout << name3 << " is now the " << namec << endl;
	}
	void newstatus1()
	{
		namea = "Father!";
		nameb = "Mother!";
		usestatus();
	}
};

class grandchild : public child // Multilevel Inheritance
{
public:
	string name4;
	grandchild(string s4, string s3, string s1, string s2) : child(s3, s1, s2)
	{
		name4 = s4;
	}
	string named = "Grand Son!";
	void usestatus1()
	{
		usestatus();
		status3();
	}
	void status4()
	{
		cout << name4 << " is now the " << named << endl;
	}
	void newstatus2()
	{
		namec = "Mother!";
		nameb = "Grandma!";
		namea = "Grandpa!";
		usestatus1();
	}
};

int main()
{
	car obj1;
	bike obj2;

	child p1("Lisa", "Ash", "Marry");
	p1.usestatus();
	cout << endl;
	p1.status3();
	p1.newstatus1();
	cout << endl;

	grandchild p2("Jake", "Lisa", "Ash", "Marry");
	p2.status4();
	p2.newstatus2();

	return 0;
}