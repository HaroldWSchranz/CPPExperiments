#include <iostream>
#include <vector>

using namespace std;

int getNumber() {
	return 5;
}

int add(int a, int b) {
	return a + b;
}

bool ascendingCompare(int a, int b) {
	return a < b;
}

bool descendingCompare(int a, int b) {
	return a > b;
}


void sortAscending(vector<int>& numbersVector) {
	for (int startIndex = 0; startIndex < numbersVector.size(); startIndex++)
	{
		int bestIndex = startIndex;

		for (int currentIndex = startIndex + 1; currentIndex < numbersVector.size(); currentIndex++)
		{
			// we are doing comparison here
			if (ascendingCompare(numbersVector[currentIndex], numbersVector[bestIndex]))
				bestIndex = currentIndex;
		}
		swap(numbersVector[startIndex], numbersVector[bestIndex]);
	}
}

void sortDescending(vector<int>& numbersVector) {
	for (int startIndex = 0; startIndex < numbersVector.size(); startIndex++)
	{
		int bestIndex = startIndex;

		for (int currentIndex = startIndex + 1; currentIndex < numbersVector.size(); currentIndex++)
		{
			// we are doing comparison here
			if (descendingCompare(numbersVector[currentIndex], numbersVector[bestIndex]))
				bestIndex = currentIndex;
		}
		swap(numbersVector[startIndex], numbersVector[bestIndex]);
	}
}


void customSort(vector<int>& numbersVector, bool(*compareFuncPtr)(int, int)) {
	for (int startIndex = 0; startIndex < numbersVector.size(); startIndex++)
	{
		int bestIndex = startIndex;

		for (int currentIndex = startIndex + 1; currentIndex < numbersVector.size(); currentIndex++)
		{
			// we are doing comparison here
			if (compareFuncPtr(numbersVector[currentIndex], numbersVector[bestIndex]))
				bestIndex = currentIndex;
		}
		swap(numbersVector[startIndex], numbersVector[bestIndex]);
	}
}

void printNumbers(vector<int>& numbersVector) {
	for (int i = 0; i < numbersVector.size(); i++)
		cout << numbersVector[i] << ' ';
}


int main()
{
	cout << endl;
	cout << "CppFunctionPointers!" << endl;
	cout << endl;

	cout << "getNumber(): " << getNumber() << endl;
	cout << "getNumber  : " << getNumber << endl;
	cout << "&getNumber : " << &getNumber << endl;
	cout << "*getNumber : " << *getNumber << endl;
	cout << endl;

	// Function pointer:
	int (*funcPtr)() = getNumber;
	cout << endl;
	cout << "funcPtr() : " << funcPtr() << endl;
	cout << "&funcPtr  : " << &funcPtr << endl;
	cout << "*funcPtr  : " << *funcPtr << endl;
	cout << "(*funcPtr)()  : " << (*funcPtr)() << endl;
	cout << endl;

	// not the reason for function pointers. Better for passing a function through a parameter list
	int(*funcPtr2)(int, int) = add;
	cout << add(2,3) << endl;
	cout << funcPtr2(3,4) << endl;
	cout << endl;


	// the reason for function pointers. Better for passing a function through a parameter list of another function

	vector<int>myNumbers = { 2,5,1,3,6,4, 3, 7, 9, 8, 0 };
	printNumbers(myNumbers);
	cout << endl; cout << endl;

	cout << "Sorting using functions sortAscending and sortDescending" << endl;
	sortAscending(myNumbers);
	printNumbers(myNumbers);
	cout << endl;
	sortDescending(myNumbers);
	printNumbers(myNumbers);
	cout << endl; cout << endl;

	cout << "customSort using function pointers for ascendingCompare and descendingCompare via customSort" << endl;
	bool (*functPtr3)(int, int) = ascendingCompare;
	customSort(myNumbers, functPtr3);
	printNumbers(myNumbers);
	cout << endl;

	bool (*functPtr4)(int, int) = descendingCompare;
	customSort(myNumbers, functPtr4);
	printNumbers(myNumbers);
	cout << endl;

	system("pause>nul");
	return 0;
}


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