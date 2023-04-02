// CopyingAndCopyConstructors.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Cherno inspiration: https://www.youtube.com/watch?v=BvR1Pgzzr38 (2018)

#include <iostream>
#include <string>

// bare metal string class
class String
{
private:
    char* m_Buffer;
    unsigned int m_Size;
public:
    // constructor
    String(const char* string)
    {
        m_Size = strlen(string);
        m_Buffer = new char[m_Size + 1];  //allow space for null termination character
        memcpy(m_Buffer, string, m_Size);
        m_Buffer[m_Size] = 0; // manually adding termination character
    }

    // copy constructor for deep copy
    // e.g. : m_Buffer(other.m_Buffer), m_Size(other.m_Size)
    // or memcpy(this, &other, sizeof(String));
    String(const String& other) : m_Size(other.m_Size)
    {
        std::cout << "Copy Constructor Copy:\n";
        m_Buffer = new char[m_Size + 1];
        memcpy(m_Buffer, other.m_Buffer, m_Size + 1);
    }


    // destructor
    ~String()
    {
        delete[] m_Buffer;
    }

    //
    char& operator[](unsigned int index) // return contents of location at index of String
    {
        return m_Buffer[index];
    }

    //
    friend std::ostream& operator<<(std::ostream& stream, const String& string);
};

// overloading for print out
std::ostream& operator<<(std::ostream& stream, const String& string)
{
    stream << string.m_Buffer;
    return stream;
}

struct Vector2
{
    float x, y;
};

void PrintString(String string)
{
    std::cout << string << std::endl;
}

void PrintStringByRef(const String& string) //const to prevent editing changing
{
    std::cout << string << std::endl;
}

int main()
{
    std::cout << "Hello World!\n\n";

    //
    int a = 2;

    int b = a;

    b = 3;

    //
    Vector2 avec = { 2,3 };
    Vector2 bvec = avec;
    bvec.x = 5;

    // copying pointers
    Vector2* apvec = new Vector2();
    Vector2* bpvec = apvec;
    bpvec->x = 2;

    // shallow copy (causes crash)
    String string = "Cherno";
    String second = string;

    second[2] = 'a';


    std::cout << string << std::endl;
    std::cout << second << std::endl;

    // passing this way causes copies
    //PrintString(string);
    //PrintString(second);

    // always pass objects by const reference
    PrintStringByRef(string);
    PrintStringByRef(second);

    //
    std::cin.get();
}
