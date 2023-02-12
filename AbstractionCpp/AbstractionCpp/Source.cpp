#include <iostream>

using namespace std;
// Abstract class is a class with at one pure virtual function

class SmartPhone {			// an interface to phones
public:
	virtual void TakeASelfie() = 0; // abstract classes, cant do instances but can do pointers
	virtual void MakeACall() = 0;
};

class Android : public SmartPhone {			// an interface to phones
public:
	void TakeASelfie() {
		cout << "Android selfie" << endl;
	}
	void MakeACall() {
		cout << "Android calling" << endl;
	}
};


class IPhone : public SmartPhone {			// an interface to phones
public:
	void TakeASelfie() {
		cout << "IPhone selfie" << endl;
	}
	void MakeACall() {
		cout << "IPhone calling" << endl;
	}
};


int main()
{
	cout << endl;
	cout << "Abstraction Cpp!" << endl;
	cout << endl;

	SmartPhone* s1 = new Android();
	s1->TakeASelfie();
	s1->MakeACall();
	cout << endl;

	SmartPhone* s2 = new IPhone();
	s2->TakeASelfie();
	s2->MakeACall();
	cout << endl;

	cout << endl;
	cout << " " << endl;
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