// when one base class is being inherited by
// multiple derived class
#include <iostream>
using namespace std;
class A // base class
{
public:
    void message()
    {
        cout << "\nwelcome to inheritance";
    }
};

class B : public A // Derived class
{
public:
    void display()
    {
        cout << "\n inside class B";
    }
};

class C : public A
{
public:
    void putdata()
    {
        cout << "\ninside class c";
    }
};
int main()
{
    A aa;         // object of class A os created
    aa.message(); // from class A
    // aa.display();//cannot be displayed as class A is not inherited by class B
    // aa.putdata();//cannot be displayed as class A is not inherited by class B
    B bb;
    bb.display(); // from class B
    bb.message(); // from class A
    // bb.putdata();//cannot be displayed as class Bis not inherited by class C
    C cc;
    cc.message(); // from class A //displayed as class A is derived in class C;
    cc.putdata(); // from class C//displayed as it is in class C
    //cc.display();//cannot be displayed as class C is not derived in class B
    return 0;
}