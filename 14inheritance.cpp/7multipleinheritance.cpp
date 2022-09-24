//single derived child class class c inherits
//the properties of base class A and B 
#include <iostream>
using namespace std;
class A
{
protected:
    int a;

public:
    void geta()
    {
        cout << "\nenter a number";
        cin >> a;
    }
    void puta()
    {
        cout << "value of a=" << a;
    }
};
class B
{
protected:
    int b;

public:
    void getb()
    {
        cout << "\nenter a number";
        cin >> b;
    }
    void putb()
    {
        cout << "\nvalue of b";
        cin >> b;
    }
};
class C : public A, public B
{
public:
    void add()
    {
        cout << "\n addition =" << a + b;
    }
};
int main()
{
    C aa;
    aa.geta();
    aa.getb();
    aa.add();
    aa.puta();
    aa.putb();
    aa.add();
    return 0;
};