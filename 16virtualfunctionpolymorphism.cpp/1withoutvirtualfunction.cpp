//virtual is a keyword in c++
//always pointer is made of base class only
//here 
#include<iostream>
using namespace std;
class A
{
    public:
     void show()
    {
        cout<<"\n base class class A";
    }
};
class B:public A
{
    public:
    void show()
    {
        cout<<"\nderived class class B";
    }
};
int main()
{
    A *bptr; A aa;//here even if you have created object of B aa then too
//  B *bptr; B aa;
    bptr=&aa;  //it will show base class class A
    bptr->show();//as pointer points to the class towhich it is pointing
    return 0;
}