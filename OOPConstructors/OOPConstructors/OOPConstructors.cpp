// OOPConstructors.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class User {
public:
    string FirstName;
    string LastName;
    int Age;
    string Email;

    //empty default constructor:
    //User() {}
    //  1)same name as class it belongs to,
    //  2)no return type specified,
    //  3)no parameters,
    //  4) public area,
    //  5)C++ autogenerates default constructor,
    //  6)default constructor automatically invoked

    //default constructor: used to instantiate object:
    //needs to be explicit if any other constructor defined:
    //auto C++ default constructor no longer defined
    User() {
        FirstName = "NFN";
        LastName = "NLN";
        Age = 0;
        Email = "NoEmail";
    }

    // parametrised constructor: used to instantiate object:
    User(string fName, string lName, int age) {
        FirstName = fName;
        LastName = lName;
        Age = age;
        Email = fName+"."+lName+"@mail.com";
    }
};

// A nonmember function; could also use a member function or operator overloading
void GetUserInfo(User u) {
    cout << "First Name: " << u.FirstName << endl;
    cout << " Last Name: " << u.LastName << endl;
    cout << "       Age: " << u.Age << endl;
    cout << "     Email: " << u.Email << endl;
}

int main()
{
    std::cout << "Hello World!\n\n";

    User user1;
    user1.FirstName = "Saldina";
    user1.LastName = "Nurak";
    user1.Age = 27;
    user1.Email = "saldinanurak@gmail.com";

    cout << "-----------" << endl;

    cout << "First Name: " << user1.FirstName << endl;
    cout << " Last Name: " << user1.LastName << endl;
    cout << "       Age: " << user1.Age << endl;
    cout << "     Email: " << user1.Email << endl;

    cout << "-----------" << endl;

    User user2("SaldinaClone", "NurakClone", 25);
    
    GetUserInfo(user2);
    
    cout << "-----------" << endl;

    User user3("AnnaClone", "LopezClone", 24);

    GetUserInfo(user3);

    cout << "-----------" << endl;

    //int test;
    //cout << test
    //cin.get();
}



/*
Simple way: use constructors instead:

int main()
{
    std::cout << "Hello World!\n";

    User user1;
    user1.FirstName = "Saldina";
    user1.LastName = "Nurak";
    user1.Age = 27;
    user1.Email = "saldinanurak@gmail.com";

    User user2;
    user2.FirstName = "Anna";
    user2.LastName = "Lopez";
    user2.Age = 28;
    user2.Email = "annalopez@gmail.com";

    cin.get();
}

*/