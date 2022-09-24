// there is no defintion for pure virtual function just virtual void show()=0
// in pure virtual function the derived class will access the base class
// which will write the defination for base class
//  virtual is a keyword in c++
//  always pointer is made of base class only

#include <iostream>
using namespace std;
class A
{
public:
    virtual void show()=0;//this is pure virtual function declaration 
};
class B : public A
{
public:
    void show()
    {
        cout << "\nderived class class B";
    }
};
int main()
{
    // A *bptr;A aa;
    A *bptr;
    B aa;         // now even if the pointer is created of class A is created
    bptr = &aa;   // the to the pointer will point towards the class B
    bptr->show(); // and not only towards the class of which pointer is created
    return 0;     // as in the earlier program
}