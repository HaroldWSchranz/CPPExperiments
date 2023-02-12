#include <iostream>

using namespace std;

void myFunction() {
	int* ptr = new int[5000];
	ptr[2] = 10;
	cout << "Hi, I am = " << ptr[2];

	// https://rules.sonarsource.com/cpp/RSPEC-5025
	delete [] ptr;
	ptr = nullptr;
}

int main()
{
	cout << endl;
	cout << "PVS Studio!" << endl;
	cout << endl;

	int savedMoney[4] = { 100,200,300,400};

	int total = 0;
	for (int i = 0; i < 5; i++)
		total += savedMoney[i];

	cout << "Total: " << total << endl;

	myFunction();
	cout << endl;

	system("pause>0");
	return 0;
}

// https://pvs-studio.com/en/order/for-students/
// PVS?Studio is a static analyzer on guard of code quality, security (SAST), and code safety 
//
// https://www.incredibuild.com/blog/cpp-visual-studio-extensions-that-will-make-your-life-a-lot-easier
//
// https://learn.microsoft.com/en-us/cpp/code-quality/code-analysis-for-c-cpp-overview?view=msvc-170
//
// 
//

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