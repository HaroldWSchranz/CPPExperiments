#include <iostream>

using namespace std;

void printNumber(int* numberPtr) {  // receives an int* pointer
	cout << "Pointer to memory " << numberPtr << " contains " << *numberPtr << endl; // *numberPtr = Indirection ("object pointed to")
}

void printLetter(char* letterPtr) {  // receives a char* pointer
	cout << "Pointer to memory " << letterPtr << " contains " << *letterPtr << endl; // *Ptr = Indirection ("object pointed to")
}


void printFloat(float* floatPtr) {  // receives a float* pointer
	cout << "Pointer to memory " << floatPtr << " contains " << *floatPtr << endl; // *floatPtr = Indirection ("object pointed to")
}

void printVoid(void* ptr, char type) {	// receives void pointer and type = i, c, f, 
	switch (type) {						// casting to type and printing the value stored on ptr
	case 'i': cout << "case: 'i': " << * ((int*)ptr) << endl; break;   // handle int*
	case 'c': cout << "case: 'c': " << *((char*)ptr) << endl; break;  // handle char*
	case 'f': cout << "case: 'f': " << *((float*)ptr) << endl; break; // handle float*
	}
}

int main()
{
	cout << "CppVoidPointers!" << endl;
	cout << endl;

	int number = 5;
	printNumber(&number);  // &number = Address-of ("address of a")
	printVoid(&number,'i');
	cout << "number =  " <<  number << endl;
	cout << "number at " << &number << endl;
	cout << endl;

	char letter = 'Z';
	printLetter(&letter);  // &number = Address-of ("address of a")
	printVoid(&letter,'c');
	cout << "letter =  " <<  letter << endl;
	cout << "letter at " << &letter << endl;
	cout << endl;

	float float_number = 3.14159265358979;
	printFloat(&float_number);
	printVoid(&float_number, 'f');
	cout << "float_number =  " <<  float_number << endl;
	cout << "float_number at " << &float_number << endl;
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
