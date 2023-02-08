#include <iostream>

using namespace std;

int main()
{
	float annualSalary = 50000.99;

	cout << "Please enter your annualSalary: ";
	cin >> annualSalary;

	float monthlySalary = annualSalary / 12;
	cout << "Your monthly salary is " << monthlySalary << endl;
	cout << "In 10 years you will earn  " << annualSalary * 10 << endl;
	cout << endl;

	int yearOfBirth = 1995;
	char gender = 'f';
	bool isOlderThan18 = true;
	float averageGrade = 4.5;
	double balance = 45678945856;

	cout<<"Size of int is "<<sizeof(int) << " bytes\n";
	//-1,-2,-3, ..., -2147483648
	cout << "Int min value is " << INT_MIN << endl;
	//+1,+2,+3, ..., +2147483647
	cout << "Int max value is " << INT_MAX << endl;
	cout << endl;

	cout << "Size of unsigned int is " << sizeof(unsigned int) << " bytes\n";
	cout << "UInt max value is " << UINT_MAX << endl;
	cout << endl;

	cout << "Size of bool is " << sizeof(bool) << " bytes\n";
	cout << endl;

	cout << "Size of char is " << sizeof(char) << " bytes\n";
	cout << endl;

	cout << "Size of float is " << sizeof(float) << " bytes\n";
	cout << endl;

	cout << "Size of double is " << sizeof(double) << " bytes\n";
	cout << endl;

	cout << "Check int overflow:\n";
	int intMax = INT_MAX;
	cout << intMax << endl;
	cout << intMax + 1;
	cout << endl;



	system("pause>0");
}