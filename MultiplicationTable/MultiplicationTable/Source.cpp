#include <iostream>

using namespace std;

int main()
{
	//Multiplication Table
	cout << "Multiplication Table!" << endl;
	
	for (int i = 1; i <= 12; i++)
	{
		for (int j = 1; j <= 12; j++)
		{
			cout << i << " * " << j << " = " << i * j << endl;
		}
		cout << endl;
	}

	cout << endl;
	system("pause>0");
	system("cls");

}