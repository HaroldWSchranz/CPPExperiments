#include <iostream>

using namespace std;

int main()
{
	//Reverse digits of a number
	cout << "Reverse digits of a number!" << endl;

	int number,reversedNumber=0;
	cout << "Number: ";
	cin >> number;
	cout << endl;

	cout << "   Input number:  " << number << endl;
	while (number != 0) {
		reversedNumber *= 10; 
		int lastDigit = number % 10;
		reversedNumber += lastDigit;
		number /= 10;
	}
	cout << "Reversed number:  " << reversedNumber << endl;

	cout << endl;

	system("pause>0");
	system("cls");

}