#include <iostream>

using namespace std;

int main()
{
	cout << "Examine ASCII values:\n";

	cout << (int)'a' << endl; // using casting operator
	cout << int('a') << endl; // using int function
	cout << (int)'A' << endl; // using casting operator
	cout << int('A') << endl; // using int function

	cout << char(65) << endl; // using char function

	cout << endl;

	char c1, c2, c3, c4, c5;

	cout << "Enter 5 letters: ";
	cin >> c1 >> c2 >> c3 >> c4 >> c5;
	cout << "ASCII message: " << int(c1) << " " << int(c2) << " " << int(c3) << " " << int(c4) << " " << int(c5);
	cout << endl;


	system("pause>0");
}