#include <iostream>

using namespace std;

int main()
{
	cout << "Prime Numbers!" << endl;

	int number;
	cout << "Number: ";
	cin >> number;

	bool isPrimeFlag = true;
	for (int i = 2; i < number; i++)
	{
		if (number % i == 0) {
			isPrimeFlag = false;
			break;
		}
	}

	if (isPrimeFlag)
		cout << "Prime number" << endl;
	else
		cout << "Not prime number" << endl;


	cout << endl;
	system("pause>0");
	system("cls");

}