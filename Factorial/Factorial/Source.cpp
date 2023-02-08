#include <iostream>

using namespace std;

int main()
{
	//The factorial of a whole number
	cout << "Factorial!" << endl;

	int number;
	cout << "Enter a whole positive number: ";
	cin >> number;

	int factorial = 1;
	for (int i = 1; i <= number; i++) {
		factorial *= i; //factorial = factorial * i;
	}
	cout << "Factorial: " << factorial;
	cout << endl;

	factorial = 1;
	for (int i = number; i >= 1; i--) {
		factorial *= i; //factorial = factorial * i;
	}
	cout << "Factorial: " << factorial;

	cout << endl;
	system("pause>0");
	system("cls");

}