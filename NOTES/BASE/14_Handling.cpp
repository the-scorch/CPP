#include <iostream>
#include <string>
#include <fstream> //operations on file
using namespace std;

void unity(int &a) noexcept
{ // guranteed that no exception in this function
	a = 1;
}

int main()
{
	// Exception/Error
	try // handles the exception
	{
		int age;
		cout << "Enter your age to check Access: ";
		cin >> age;
		if (age >= 18)
		{
			cout << "Access Granted - You are Old enough!\n\n";
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

	int choice;
	cout << "Enter 1 for Invalid argument/2 for out of range: ";
	cin >> choice;
	try // Nested try-catch pair
	{
		if (choice == 1)
		{
			throw invalid_argument("Invalid argument");
		}
		try
		{
			if (choice == 2)
			{
				throw out_of_range("Out of range");
			}
			else
			{
				throw "Unknown error";
			}
		}
		catch (const out_of_range &e)
		{
			cout << "Caught exception: " << e.what() << endl;
		}
		catch (...)
		{
			cout << "Caught an Unknown exception." << endl;
		}
	}
	catch (const invalid_argument &e)
	{
		cout << "Caught exception: " << e.what() << endl;
	}

	// File
	ofstream File("work.txt"); // Create or Open file to write
	if (!File.is_open())   // check opening of file
	{
		cerr << "\n\tError: Can't open the file to read!";
		return 1;
	}
	File << "This is My first File in C++!";
	File << "\nThis is Ashitabh Srivastava writing this on 10 Sep 2025.";
	File.close(); // Close file

	ifstream ReadFile("work.txt"); // Open file to read
	if (!ReadFile.is_open())
	{
		cerr << "\n\tError: Can't open the file to read!";
		return 1;
	}
	string text;
	while (getline(ReadFile, text))
	{
		cout << endl
			 << text;
	}
	if (ReadFile.eof()) // end of file
	{
		cout << "\n\n\tReached end of file.\n" << endl;
	}
	else
	{
		cerr << "\n\tError: File reading failed!" << endl;
	}
	ReadFile.close();

	ofstream errorLog("error_log.txt");
	cerr.rdbuf(errorLog.rdbuf()); // Redirect cerr to the file
	cerr << "\tThis is an error message written to a file." << endl;
	errorLog.close();

	ofstream Binaryfile("file.bin", ios::binary);
	if(!Binaryfile.is_open()){
		cerr << "\n\tError: Can't open the file to read!";
		return 1;
	}
	string B = "Hey, there this is me again..Your Handsome Friend - Ashitabh!";
	size_t Blen = B.length();
    Binaryfile.write(reinterpret_cast<const char*>(&Blen),sizeof(Blen));//string size in binary
    Binaryfile.write(B.c_str(), Blen); //string in binary
	Binaryfile.close();

	ifstream file("file.bin", ios::binary);
    if (!file) {
        cerr << "\n\tError: Can't open the file to read!";
        return 1;
    }
	string B1;
    size_t Blen1;
    file.read(reinterpret_cast<char*>(&Blen1), sizeof(Blen1));//reading the string from binary
    char* buffer = new char[Blen1 + 1];//converting for storing
    file.read(buffer, Blen1);
    buffer[Blen1] = '\0';
    B1 = buffer;
    cout << "File Data: " << B1;
    delete[] buffer;
    file.close();

	return 0;
}