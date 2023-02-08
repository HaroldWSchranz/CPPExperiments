#include <iostream>

using namespace std;

int main()
{
	int grade, sum=0;

	cout << "Arithmetic!" << endl;
	cout << endl;

	for (int i = 0; i < 3; i++) {
		do {
			cout << "Enter grade " << i + 1 << ": ";
			cin >> grade;
		} while (grade<1 || grade>5);
		sum += grade;
	}
	cout << "          Sum = " << sum << endl;
	cout << "Average Grade = " << (float)sum/3.0 << endl;
	cout << endl;
	system("pause>0");
	system("cls");

}