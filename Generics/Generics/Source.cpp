#include <iostream>
using namespace std;
// Overloaded functions
//void Swap(int& a, int& b) {
//	int temp = a;
//	a = b;
//	b = temp;
//}
//void Swap(char& a, char& b) {
//	char temp = a;
//	a = b;
//	b = temp;
//}
// Generic functions
// template<typename T> or template<typename Type> or template<class Type>
template<typename T>
void Swap(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;
}
int main()
{
	cout << "Generics and Templates!" << endl;

	int a = 5, b = 7;
	cout << "a = " << a << " b = " << b << endl;
	Swap(a, b);
	cout << "a = " << a << " b = " << b << endl;
	cout << endl;

	char c = 'C', d = 'D';
	cout << "c = " << c << " d = " << d << endl;
	Swap(c, d);
	cout << "c = " << c << " d = " << d << endl;
	cout << endl;
	
	float e = 1.1, f = 2.2;
	cout << "e = " << e << " f = " << f << endl;
	Swap(e, f);
	cout << "e = " << e << " f = " << f << endl;
	cout << endl;

	system("pause>0");
	system("cls");

}