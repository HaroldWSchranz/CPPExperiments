// OOPDestructors.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Book {
public:
    string Title;
    string Author;
    int* Rates;
    int RatesCounter;

    // constructor
    Book(string title, string author) {
        Title = title;
        Author = author;

        RatesCounter = 2;
        Rates = new int[RatesCounter];
        Rates[0] = 4;
        Rates[1] = 5;

        cout << Title + " constructor invoked\n";
    }

    // destructor (there can only be one)
    ~Book() {
        //delete Rates; // would only delete address of array
        delete [] Rates; // deletes array locations
        Rates = nullptr;
        cout << Title + " destructor invoked\n";
    }

};

int main()
{
    std::cout << "Hello World!\n";

    Book book1("Millionaire Fastlane", "M. J. DeMarco");
    Book book2("C++ Lambda Story", "Bartek Filipek");

    //Book book3 = book2; // needs a copy constructor because destructors are invoked in reverse order, destructor on book2 would not have access.

}


/*

For simple classes dont need explicit 

As soon as involving pointers need to have destructors

*/