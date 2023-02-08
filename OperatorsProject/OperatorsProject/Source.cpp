#include <iostream>

using namespace std;

int main()
{
	//+,-,*,/,%

	cout << 5 + 2 << endl;//7
	cout << 5 / 2 << endl;//2
	cout << 5 % 2 << endl;//1

	//++,--
	int counter = 7;
	counter++;
	cout << counter << endl;
	counter--;
	cout << counter << endl;

	int counter2 = 7;
	cout << counter2++ << endl; //post increment
	cout << counter2 << endl;
	cout << ++counter2 << endl; //pre increment
	cout << counter2-- << endl; //post decrement
	cout << counter2 << endl;
	cout << --counter2 << endl; //pre decrement
	cout << endl;
	system("pause>0");
	system("cls");

	//<,?,<=,>=,==,!=
	int a = 5, b = 5;
	cout << (a != b);

	cout << endl;
	system("pause>0");
	system("cls");

	//&&,||,!

	a = 5;
	b = 8;
	cout << (a == 5 && b == 5);
	cout << endl;
	cout << (a == 5 || b == 5);
	cout << endl;
	cout << (a == 5 && b == 5+3);
	cout << endl;

	//=,+=,-=,*=,/=,%=
	int x = 5;
	x += 7;
	//x = x + 7;
	cout << " x " << x << endl;
	x -= 7;
	//x = x - 7;
	cout << " x " << x << endl;
	x *= 7;
	//x = x * 7;
	cout << " x " << x << endl;
	x /= 7;
	//x = x / 7;
	cout << " x " << x << endl;
	x %= 7;
	//x = x % 7;
	cout << " x " << x << endl;

	system("pause>0");
}