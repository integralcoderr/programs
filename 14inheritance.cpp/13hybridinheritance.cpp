// when we combinr e the concept of two or more basic inheritance
// any from single multiple multilevel hierarchical
#include <iostream>
using namespace std;
class A
{
public:
    void putdata()
    {
        cout << "\ninside class A";
    }
};
class B : public A
{
public:
    void display()
    {
        cout << "\ninside class B";
    }
};
class C
{
public:
    void message()
    {
        cout << "\ninside class C";
    }
};
class D : public B, public C
{
public:
    void print()
    {
        cout << "\ninside class D";
    }
};
int main()
{
    A aa;
    aa.putdata();
    //aa.display();
    //aa.message();
    //aa.print();
    B bb;
    bb.putdata();
    bb.display();
    //bb.message();//not displayed as function message is in class b and b is not derived in class c
    //bb.print();
    C cc;
    //cc.putdata();
    //cc.display();
    cc.message();
    //cc.print();
    D dd;
    dd.putdata();
    dd.display();
    dd.message();
    dd.print();
}