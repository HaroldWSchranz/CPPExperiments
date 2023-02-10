#include <iostream>

using namespace std;

int main()
{
	cout << "CppPointers!" << endl;

	int n = 5;
	int* ptr = &n; // hold address of n variable

	cout << endl;
	cout << "  n =  " << n << endl;
	cout << "  n at " << &n << endl;
	cout << " ptr = " << ptr << endl;
	cout << "*ptr = " << *ptr << endl;

	*ptr = 10;

	cout << endl;
	cout << "  n =  " << n << endl;
	cout << "  n at " << &n << endl;
	cout << " ptr = " << ptr << endl;
	cout << "*ptr = " << *ptr << endl;

	int v;
	int* ptr2 = &v;
	*ptr2 = 7;

	cout << endl;
	cout << "  v =  " << v << endl;
	cout << "  v at " << &v << endl;
	cout << " ptr2 = " << ptr2 << endl;
	cout << "*ptr2 = " << *ptr2 << endl;


	system("pause>0");
	return 0;
}