#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	cout << "Triangle Shapes!" << endl;

	int length;
	cout << "Length: ";
	cin >> length;

	char symbol1;
	cout << "Symbol 1: ";
	cin >> symbol1;

	char symbol2;
	cout << "Symbol 2: ";
	cin >> symbol2;

	cout << "Field: ";
	int field;
	cin >> field;

	for (int i = 1; i <= length; i++) {
		for (int j = 1; j <= i; j++) {
			cout << setw(field) << symbol1;
		}
		for (int j = i+1; j <= length; j++) {
			cout << setw(field) << symbol2;
		}
		cout << endl;
	}

	cout << endl;
	system("pause>0");
	system("cls");

}