// when we combinr e the concept of two or more basic inheritance
// any from single multiple multilevel hierarchical
#include <iostream>
using namespace std;
class A
{
public:
    void showA()
    {
        cout << "\ninside class A";
    }
};
class B : public A
{
public:
    void showB()
    {
        cout << "\ninside class B";
    }
};
class C
{
public:
    void showC()
    {
        cout << "\ninside class C";
    }
};
class D : public B, public C
{
public:
    void showD()
    {
        cout << "\ninside class D";
    }
};
int main()
{
    A aa;
    aa.showA();
    //aa.showB();
    //aa.showC();
    // aa.showD();

    // bb.showA();
    //bb.showB();
    //bb.showC();
   // bb.showD();

    //cc.showA();
    //cc.showB();
    //cc.showC();
    //cc.showD()

    //dd.showA();
    //dd.showB();
    //dd.showC(); /*if the obe=ject is commented then also */
    //dd.showD();  //the othe object gets affected

    B bb;
    bb.showA();
    bb.showB();
    // bb.showc();
    // bb.showD();
    aa.showA();
    // aa.showB();
    // aa.showC();
    //  aa.showD();

     //cc.showA();
    // cc.showB();
    // cc.showC();
    //cc.showD()

    // dd.showA();
    // dd.showB();
    // dd.showC();
    // dd.showD();

    aa.showA();
    // aa.showB();
    // aa.showc();
    // aa.showD();

    C cc;
    // cc.showA();
    //  cc.showB();
    cc.showC();
    // cc.showD();
    aa.showA();
    // aa.showB();
    // aa.showC();
    //  aa.showD();

    // bb.showA();
    // bb.showB();
    // bb.showC();
    // bb.showD();

    // cc.showA();
    // cc.showB();
    // cc.showC();
    // cc.showD()

    // dd.showA();
    // dd.showB();
    // dd.showC();
    // dd.showD();
    D dd;
    dd.showA();
    dd.showB();
    dd.showC();
    dd.showD();
    aa.showA();
    // aa.showB();
    // aa.showC();
    //  aa.showD();

    // bb.showA();
    // bb.showB();
    // bb.showC();
    // bb.showD();

    // cc.showA();
    // cc.showB();
    // cc.showC();
    // cc.showD()

    // dd.showA();
    // dd.showB();
    // dd.showC();
    // dd.showD();
    return 0;
}