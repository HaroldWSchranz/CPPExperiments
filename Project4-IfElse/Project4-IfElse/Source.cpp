// This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{

    // User enters integer number;
    //Program write out if that number is even or odd;

    std::cout << "Even or odd!" << endl;

    int number;
    std::cout << "Please enter a whole number: ";
    cin >> number;

    if (number % 2 == 0)
    {
        cout << "Number " << number << " is even." << endl;
    }
    else
    {
        cout << "Number " << number << " is odd." << endl;
    }

    std::cout << "Goodbye World!\n";
    system("pause>0");
}
