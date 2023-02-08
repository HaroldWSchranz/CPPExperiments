#include <iostream>

using namespace std;

int main()
{
	//BMI Calculator
	//weight(kg) / (height(m) * height(m))
	//Underweight < 18.5
	//Normal weight 18.5-24.9
	//Overweight > 25
	float weight, height, bmi;

	cout << "BMI Calculator!" << endl;
	cout << "Please enter weight(kg) and height(m): " << endl;
	cin >> weight >> height;
	bmi = weight / (height * height);

	cout << endl;
	if (bmi < 18.5)
		cout << "Underweight" << endl;
	else if(bmi >25)
		cout << "Overweight" << endl;
	else
		cout << "Normal weight" << endl;

	cout << " with a BMI of " << bmi << endl;

	cout << endl;
	system("pause>0");
	system("cls");

}