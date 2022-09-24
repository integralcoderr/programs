//overloading same name diff parameters
//overriding same name with same parameters
//inheritance should be there if you are using function or 
//method overriding as it has same name same parameters
//method overloading is achieved at compile time and 
//and method overriding is achieved at runtime 
#include<iostream>
using namespace std;
class Base
{
    public:
    void show()
    {
        cout<<"\nbase class\n";
    }
};
class derived:public Base
{
public:

void show ()
{
    cout<<"\nderived class\n";
}
};
int main()
{
    Base b;
    derived d;
    b.show();
    d.show();
}