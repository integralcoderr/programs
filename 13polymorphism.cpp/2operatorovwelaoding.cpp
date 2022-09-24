// youtube channel sudhakar atchala operator overloading
#include <iostream>
using namespace std;
class complex
{
private:
    int real, imag;

public:
    complex() // candidate expects 1 argument
    {
    }
    complex(int r, int i)
    {
        real = r;
        imag = i;
    }
    void display()
    {
        cout << real << "+i" << imag;
    }
    complex operator+(complex c2) // operator overloading
    {
        complex c3;
        c3.real = real + c2.real;
        c3.imag = imag + c2.imag;
        return c3;
    }
};

int main()
{
    complex c1(10, 20);
    complex c2(1, 2);
    complex c3; // default constructor
    c3 = c1 + c2;
    c3.display();
    return 0;
}