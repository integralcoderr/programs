// objects are always made of derived class
#include <iostream>
using namespace std;
class A
{
public:
    void display()
    {
        cout << "base class";
    }
};
class B : public A
{
public:
    void display()
    {
        cout << "\n derived class";
    
    }
};
int main()
{
    B aa;
    aa.display(); aa.A::display();

    return 0;
}