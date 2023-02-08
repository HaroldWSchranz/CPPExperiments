#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	cout << "Rectangle Shape!" << endl;

	int height, width;
	cout << " Height: ";
	cin >> height;
	cout << " Width: ";
	cin >> width;
	char symbol;
	cout << "Symbol: ";
	cin >> symbol;
	cout << "Field: ";
	int field;
	cin >> field;

	for (int h = 0; h < height; h++) {
		for (int w = 0; w < width; w++) {
			cout << setw(field) << symbol;
		}
		cout << endl;
	}
	cout << endl;
	system("pause>0");
	system("cls");

}