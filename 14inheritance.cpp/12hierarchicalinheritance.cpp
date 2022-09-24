//when one base class is being inherited by multiple derivec class then 
//that is called hierarchical inheritance
#include<iostream>
using namespace std;
class A
{
    public:
    void printA()
    {
        cout<<"\ninside class A";
    }
};
class B:public A
{
public:
void printB()
{
    cout<<"\nInside class B";
}
};
class C:public A
{
    public:
    void printC()
    {
     cout<<"\nINside class c";
    }
};
int main()
{
    A aa;
    aa.printA();
   // aa.printB();//not displayed
   //aa.printC();//not displayed
   B bb;
   bb.printA();//as class A is inherite by class B
   bb.printB();//object of class b is created anf function from that class is called
  // bb.printC();//not displayed as class C is not inherited by class B
    return 0;
}