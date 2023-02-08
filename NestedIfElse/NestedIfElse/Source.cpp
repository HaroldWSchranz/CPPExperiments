#include <iostream>
using namespace std;

int main()
{

    //User enters side lengths of a triangle (a,b,c)
    //Program write out whether the triangle is
    //equilateral, isosceles or scalene

    std::cout << "Triangle Type!" << endl;

    float a, b, c;
    std::cout << "Please enter side lengths: a, b, c: ";
    cin >> a >> b >> c;

    if (a == b && b == c)
    {
        cout << "Equilateral triangle with sides: " << a << ", " << b << ", " << c << endl;
    }
    else
    {
        if (a != b && a != c && b != c)
        {
            cout << "Scalene triangle with sides: " << a << ", " << b << ", " << c << endl;
        }
        else
        {
            cout << "Isosceles triangle with sides: " << a << ", " << b << ", " << c << endl;
        }
    }

    std::cout << "Goodbye World!\n";
    system("pause>0");
}