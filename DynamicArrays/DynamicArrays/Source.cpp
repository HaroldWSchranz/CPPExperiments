#include <iostream>

using namespace std;

int main()
{
	cout << endl;
	cout << "Dynamic Arrays!" << endl;
	cout << endl;

	int size;
	cout << "Size: ";
	cin >> size;
	
	int* myArray = new int[size]; // allocate an array of size at run time

	for (int i = 0; i < size; i++) {
		cout << "Array[" << i << "] : ";
		cin >> myArray[i];
	}

	cout << endl;

	for (int i = 0; i < size; i++) {
		cout << myArray[i] << " ";		// one way to dereference array
	}

	cout << endl;

	for (int i = 0; i < size; i++) {
		cout << *(myArray + i)  << " "; // another way to dereference arrays
	}

	cout << endl;

	// deallocate arrays

	delete[] myArray; // deallocate array
	//myArray = NULL;  // Is NULL = nullptr? set ptr to not pointing at anything!
	myArray = nullptr;  // Is NULL = nullptr? set ptr to not pointing at anything!

	// https://www.reddit.com/r/cpp_questions/comments/m9baml/what_is_the_difference_between_null_and_nullptr/
	// NULL is a macro from the C standard library. It is one of the ways in C to give a pointer an invalid address.
	// Its actual definition is implementation defined. Since C++11, it can be either 0, or nullptr.

	// nullptr is a keyword for std::nullptr_t.Similarly, it's the modern C++ way of giving an invalid address 
	// to a pointer. The main difference between these two is that nullptr will only work with pointers, 
	// but NULL will work with integers as well, if your implementation defines it as 0.


	system("pause>0");
	return 0;
}

/*

NULL is a macro from the C standard library. It is one of the ways in C to give a pointer an invalid address. 
Its actual definition is implementation defined. Since C++11, it can be either 0, or nullptr.

nullptr is a keyword for std::nullptr_t. Similarly, it's the modern C++ way of giving an invalid address 
to a pointer.

The main difference between these two is that nullptr will only work with pointers, but NULL will work 
with integers as well, if your implementation defines it as 0.

int n1{NULL}; // Could compile, just sets n1 to 0.
int n1{nullptr}; // Error.

This could lead to some bugs. Consider this example:

#include <cstdlib> // NULL

void foo(int *ptr)
{
	std::cout << "Passed pointer.\n";
}

void foo(int num)
{
	std::cout << "Passed integer.\n";
}

int main()
{
	foo(nullptr);
	foo(NULL);

	return 0;
}

Possible output:

Passed pointer.
Passed integer.

You shouldn't be using NULL in C++. Unlike NULL, nullptr is safer as you cannot use it with integers, 
and it's a keyword so to don't have to include an addition header file to use it.
*/

/*
#include <iostream>

using namespace std;

int main()
{
	cout << endl;
	cout << "CppArrayPointers!" << endl;
	cout << endl;

	system("pause>0");
	return 0;
}
*/