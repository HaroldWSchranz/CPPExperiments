#include <iostream>

using namespace std;

void introduceMe(string name, string city, int age=0);

void main()
{
	cout << "Function Project" << endl;
	cout << "Hello from main() function" << endl;
	string name, city;
	int age;
	cout << "Name: ";
	cin >> name;

	cout << "City: ";
	cin >> city;

	cout << "Age: ";
	cin >> age;

	introduceMe(name, city, age);

	introduceMe("Saldina", "Mostar", 25);

	introduceMe("Anna", "NY");

	introduceMe("Harold", "Sydney", 64);

	introduceMe("Name", "City");


	cout << endl;

	system("pause>0");
	system("cls");
}

void introduceMe(string name, string city, int age)
{
	cout << "My name is " << name << endl;
	cout << "I am from " << city << endl;
	if (age!=0)
		cout << "I am " << age << " years old" << endl;
	cout << endl;
}
