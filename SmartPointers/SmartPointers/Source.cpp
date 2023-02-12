#include <iostream>

using namespace std;

class MyClass {
public:
	MyClass(){
		cout << "Constructor invoked" << endl;
	}
	~MyClass() {
		cout << "Destructor invoked" << endl;
	}

};


int main()
{
	cout << endl;
	cout << "Smart Pointers!" << endl;
	cout << endl;

	cout << "make unique_ptr unPtr1" << endl;
	unique_ptr<int>unPtr1 = make_unique<int>(25); // make a unique point integer of value 25
	cout << unPtr1 << endl;
	cout << *unPtr1 << endl;

	cout << "move unique_ptr unPtr1 to unPtr2" << endl;
	unique_ptr<int>unPtr2 = move(unPtr1);
	cout << unPtr2 << endl;
	cout << *unPtr2 << endl;

	// Scope for pointer unPtr
	{
		cout << "make unique_ptr unPtr" << endl;
		unique_ptr<MyClass>unPtr = make_unique<MyClass>();
		cout << unPtr << endl;
		//cout << *unPtr << endl;
	}

	cout << endl;

	// Scope for shared pointer shPtr
	{
		cout << "make shared_ptr shPtr1" << endl;
		shared_ptr<MyClass>shPtr1 = make_shared<MyClass>();
		cout << shPtr1<< endl;
		cout << "Shared count: shPtr1 : " << shPtr1.use_count() << endl;
		cout << "make shared_ptr shPtr2" << endl;
		shared_ptr<MyClass>shPtr2 = shPtr1;
		cout << "Shared count: shPtr2 : " << shPtr2.use_count() << endl;

		{
			cout << "make shared_ptr shPtr3" << endl;
			shared_ptr<MyClass>shPtr3 = shPtr1;
			cout << "Shared count: shPtr1 : " << shPtr1.use_count() << endl;
		}

		cout << "Shared count: shPtr1 : " << shPtr1.use_count() << endl;
	}

	cout << endl;

	// Weak pointers
	{
		cout << "make weak_ptr wePtr1" << endl;
		weak_ptr<int>wePtr1;

		{
			cout << "make shared_ptr shPtr1" << endl;
			shared_ptr<int>shPtr1 = make_shared<int>(25);
			cout << "Shared count: shPtr1 : " << shPtr1.use_count() << endl;
			wePtr1 = shPtr1;
			cout << "Shared count: shPtr1 : " << shPtr1.use_count() << endl;
			cout << "Shared count: wePtr1 : " << wePtr1.use_count() << endl;

		}
		cout << "Shared count: wePtr1 : " << wePtr1.use_count() << endl;

	}
	
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