#include <iostream>

using namespace std;

bool isPrimeNumber(int number){
	for (int i = 2; i < number; i++)
	{
		if (number % i == 0)
			return false;
	}
	return true;
}

int main()
{
	cout << "Prime Numbers!" << endl;

	for (int i = 1; i <= 1000; i++){
		bool isPrime = isPrimeNumber(i);
		if(isPrime)
			cout << i << " is a prime number. ";
	}

	cout << endl;
	system("pause>0");
	system("cls");

}