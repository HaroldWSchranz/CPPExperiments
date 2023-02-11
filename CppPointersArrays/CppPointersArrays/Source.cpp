#include <iostream>

using namespace std;


int main()
{
	cout << "CppArrayPointers!" << endl;
	cout << endl;

	int luckyNumbers[5] = {1,2,3,4,5};

	cout << "Name of luckyNumbers is memory location of first element:" << endl;
	cout << luckyNumbers << endl;
	cout << &luckyNumbers << " : location of luckyNumbers" << endl;
	cout << &luckyNumbers[0] << " : location of [0] element" << endl;
	cout << luckyNumbers[0] << " : since [0] acts a dereferenceing operator" << endl;
	cout << &luckyNumbers[1] << " : location of [1] element" << endl;
	cout << luckyNumbers[1] << " : since [1] acts a dereferenceing operator" << endl;
	cout << *(luckyNumbers + 1) << " : *(luckyNumbers + 1)" << endl;
	cout << endl;

	// use loop to write out location and values of array
	for (int i = 0; i < 5; i++) {
		cout << &luckyNumbers[i] << " : location of [" << i << "] element" << endl;
		cout << luckyNumbers[i] << " : since [" << i << "] acts a dereferenceing operator" << endl;
		cout << *(luckyNumbers + i) << " : *(luckyNumbers + " << i << ")" << endl;

	}

	cout << endl;

	// read in 5 elements 
	for (int i = 0; i < 5; i++) {
		cout << "Number " << i + 1 << ": " << endl;
		cin >> luckyNumbers[i];
	}

	cout << endl;

	// write out 5 elements
	for (int i = 0; i <5; i++) {
		cout << *(luckyNumbers + i) << " " ;
	}

	cout << endl;

	system("pause>0");
	return 0;
}


// https://www.wikiwand.com/en/Operators_in_C_and_C%2B%2B
// https://www.w3schools.com/cpp/cpp_pointers.asp
// A pointer is a variable that stores the memory address as its value. 
// Use the & operator to store the memory address of a variable and assign it to the pointer.
// 
// Tip: There are three ways to declare pointer variables, but the first way is preferred:
//      string* mystring; // Preferred
//      string* mystring;
//      string* mystring;
//
// https://arduinogetstarted.com/reference/arduino-dereference
// Dereferencing is one of the features specifically for use with pointers. The asterisk
// operator * is used for this purpose.
// If p is a pointer, then* p represents the value contained in the address pointed by p.
//
// Template:
// #include <iostream>
// 
// using namespace std;
// 
// int main()
// {
// 	cout << endl;
// 	cout << "CppArrayPointers!" << endl;
// 	cout << endl;
// 
// 	system("pause>0");
// 	return 0;
// }
// 