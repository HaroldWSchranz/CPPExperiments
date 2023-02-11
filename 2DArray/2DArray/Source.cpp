#include <iostream>

using namespace std;

int main()
{
	cout << endl;
	cout <<"2D Array!" << endl;
	cout << endl;

	int rows, cols;
	cout << "rows, cols: ";
	cin >> rows >> cols;

	int** table = new int* [rows];            // 1st allocated
	for (int i = 0; i < rows; i++) {
		table[i] = new int[cols];			// 2nd allocate
	}

	// table[1][2] = 88;

	for (int i = 0; i < rows; i++) {
		delete[] table[i];			// 2nd allocated
	}
	delete[] table;
	table = NULL;
	
	system("pause>0");
	return 0;
}


/*

		for (int j = 0; j < cols; j++) {

		}

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