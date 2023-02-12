#include <iostream>

using namespace std;

class EquilateralTriangle {
private:
	float a;
	float circumference;
	float area;
public:
	void setA(float length) {
		a = length;
		circumference = a * 3;
		area = (1.7320508076 * a * a) / 4;
	}

	friend void PrintResults(EquilateralTriangle);
	friend class Homework;
};

class Homework {
public:
	void PrintResults(EquilateralTriangle et) {
		cout << "            a = " << et.a << endl;
		cout << "circumference = " << et.circumference << endl;
		cout << "area          = " << et.area << endl;
	}
};


int main()
{
	cout << endl;
	cout << "Friend Functions Cpp!" << endl;
	cout << endl;

	Homework h;

	EquilateralTriangle et;
	et.setA(3);
	h.PrintResults(et);
	et.setA(10);
	h.PrintResults(et);


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
