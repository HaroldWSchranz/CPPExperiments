#include <iostream>

using namespace std;

int main()
{
	cout << "Enter PIN! (Max 3 attempts)" << endl;

	int usersPin = 1234, pin, errorCounter=0;

	do {
		cout << "Attempt " << errorCounter+1 << ": Enter PIN: ";
		cin >> pin;
		if (pin != usersPin)
			errorCounter++;

	} while (errorCounter<3 && pin!=usersPin);

	if (errorCounter < 3)
		cout << "PIN is correct. Account is Loading ...";
	else
		cout << "PIN is incorrect. Account is Blocked!";

	cout << endl;
	system("pause>0");
	system("cls");

}