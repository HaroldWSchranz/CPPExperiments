// push_back.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

void printVector(vector<int> intVector)
{
    for (vector<int>::iterator i = intVector.begin(); i != intVector.end(); i++)
    {
        cout << *i << " ";
    }
}

int main()
{
    std::cout << "Hello push_back!\n";

    vector<int> intVector{ 1, 2, 3, 4, 5 };

    intVector.push_back(6);
    intVector.push_back(7);
    intVector.push_back(8);

    printVector(intVector);

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
