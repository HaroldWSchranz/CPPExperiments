#include <iostream>
using namespace std;
// Demonstrating virtual functions (implemented and unimplemented)
class Instrument {
public:
	virtual void Brand() = 0; // pure virtual function
	virtual void MakeSound() {
		cout << "Instrument playing ... just choose a random one and play a\n";
	}
	void PlayPiece() {
		cout << "potentially perfect passionate piece of music!\n\n";
	}
};

class Accordion: public Instrument {
public:
	void Brand() { // similar one: https://assets.catawiki.nl/assets/2018/10/18/2/8/f/28fede0f-8b85-4875-a6cd-11c0a3db53d8.jpg
		cout << "Parrot ";
	}
	void MakeSound() {
		cout << "Accordion playing ... and so playing a\n";
	}
};

class Piano : public Instrument {
public:
	void Brand() {
		cout << "Steinway & Sons ";
	}
	void MakeSound() {
		cout << "Piano playing ... and so playing a\n";
	}
};

int main()
{
	cout << endl;
	cout << "Virtual Functions Cpp!" << endl;
	cout << endl;

	Instrument* i1 = new Accordion();
	i1->Brand();
	i1->MakeSound();
	i1->PlayPiece();

	Instrument* i2 = new Piano();
	i2->Brand();
	i2->MakeSound();
	i2->PlayPiece();

	cout << endl;
	Instrument* instruments[2] = { i1, i2 };
	for (int i = 0; i < 2; i++)
	{
		instruments[i]->Brand();
		instruments[i]->MakeSound();
		instruments[i]->PlayPiece();
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