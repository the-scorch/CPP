#include <iostream>
#include <fstream> // for operations on file
#include <string>
using namespace std;

int main()
{
	// Files
	
	ofstream File("work.txt"); // Create or Open a txt file

	File << "This is My first File in C++!"; // Write to file

	File.close(); // Close the file

	string text;
	ifstream ReadFile("work.txt"); // Open the file to read

	while (getline(ReadFile, text)) // Read the file line by line
	{
		cout << text;
	}

	ReadFile.close();

	cout << "\n\n";

	// Exceptions or Errors

	try // handles the exception
	{
		int age;
		cout << "Enter your age to check Access: ";
		cin >> age;
		if (age >= 18)
		{
			cout << "Access Granted - You are Old enough!\n";
		}
		else
		{
			throw(age); // throw an exception
		}
	}
	catch (int num) // catches the exception
	{
		cout << "Access Denied - You must be at least 18 years old.\n";
		cout << "Your Age is: " << num << "\n\n";
	}

	return 0;
}