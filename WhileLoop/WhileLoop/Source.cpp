#include <iostream>

using namespace std;

int main()
{
	//Write out all the numbers between 100-500 that are divisible by 3 and 5

	cout << "While Loop!" << endl;

	int counter = 100;
	while (counter<=500)
	{
		if (counter % 3 == 0 && counter % 5 == 0)
			cout << counter << " is divisible by 3 and 5\n";

		counter++;
	}

	cout << endl;

	system("pause>0");
	system("cls");

}