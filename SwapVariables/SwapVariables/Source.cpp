#include <iostream>

using namespace std;

int main()
{
	// Program for swapping values of two variables
	cout << "Program for swapping values of two variables!" << endl;

	int a = 20;
	int b = 10;
	cout << "a = " << a << " b = " << b << endl;

	cout << "Swap using a temp variable" << endl;
	int temp = a;
	a = b;
	b = temp;
	cout << "a = " << a << " b = " << b << endl;

	//a = 20;
	//b = 10;

	cout << "Swap without using a temp variable" << endl;
	a = a + b;
	b = a - b;
	a = a - b;
	cout << "a = " << a << " b = " << b << endl;

	cout << "Swap without using a temp variable" << endl;
	a = a + b;
	b = a - b;
	a = a - b;
	cout << "a = " << a << " b = " << b << endl;
	cout << endl;

	system("pause>0");
	system("cls");

}