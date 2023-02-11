#include <iostream>

using namespace std;

int getMin(int numbers[], int size) {
	int min = numbers[0];
	for (int i = 1; i < size; i++) {
		if (numbers[i] < min)
			min = numbers[i];
	}
	return min;
}

int getMax(int numbers[], int size) {
	int max = numbers[0];
	for (int i = 1; i < size; i++) {
		if (numbers[i] > max)
			max = numbers[i];
	}
	return max;
}

void getMinAndMax(int numbers[], int size, int*min, int* max) {

	for (int i = 1; i < size; i++) {
		if (numbers[i] < *min)
			*min = numbers[i];

		if (numbers[i] > *max)
			*max = numbers[i];
	}
}

int main()
{
	cout << endl;
	cout << "CppPointers!" << endl;

	cout << endl;

	int numbers[5] = { 1,2,3,4,5 };
	int min = numbers[0];
	int max = numbers[0];
	cout << "Min is " << getMin(numbers, 5) << endl;
	cout << "Max is " << getMax(numbers, 5) << endl;
	getMinAndMax(numbers, 5, &min, &max);
	cout << "Min is " << min << endl;
	cout << "Max is " << max << endl;
	cout << endl;

	int numbers2[10] = { 9,8,7,6,0,1,2,3,4,5 };
	min = numbers2[0];
	max = numbers2[0];
	cout << "Min is " << getMin(numbers2, 10) << endl;
	cout << "Max is " << getMax(numbers2, 10) << endl;
	getMinAndMax(numbers2, 10, &min, &max);
	cout << "Min is " << min << endl;
	cout << "Max is " << max << endl;
	cout << endl;

	system("pause>0");
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