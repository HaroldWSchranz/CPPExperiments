// VirtualOverride.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// CPP program to illustrate
// concept of Virtual Functions
// https://www.geeksforgeeks.org/virtual-function-cpp/
// https://www.fluentcpp.com/2020/02/21/virtual-final-and-override-in-cpp/

#include<iostream>
using namespace std;

class base {
public:
    virtual void print()
    {
        cout << "print base class\n";
    }

    void show()
    {
        cout << "show base class\n";
    }

    virtual void f()
    {
        std::cout << "Base class default behaviour\n";
    }
};

class derived : public base {
public:
    void print()
    {
        cout << "print derived class\n";
    }

    void show()
    {
        cout << "show derived class\n";
    }

    void f() override
    {
        std::cout << "Derived class overridde behaviour\n";
    }
};

int main()
{
    base* bptr;
    derived d;
    bptr = &d;

    std::cout << "Virtual Override!\n";

    // Virtual function, binded at runtime
    bptr->print();

    // Non-virtual function, binded at compile time
    bptr->show();

    //
    bptr->f();

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
