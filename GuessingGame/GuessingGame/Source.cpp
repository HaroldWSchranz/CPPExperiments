#include <iostream>

using namespace std;

int main()
{
	int hostUserNum, guestUserNum;
	cout << "Guessing Game!" << endl;

	cout << "Host number: ";
	cin >> hostUserNum;
	system("cls");

	cout << "Guest number: ";
	cin >> guestUserNum;

	/* if (hostUserNum == guestUserNum)
		cout << "Correct!";
	else
		cout << "Failed"; */

	(hostUserNum == guestUserNum) ? cout << "Correct!" : cout << "Failed";

	cout << endl;
	system("pause>0");
	system("cls");

}