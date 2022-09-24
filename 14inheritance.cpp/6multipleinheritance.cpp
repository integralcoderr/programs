#include <iostream>
using namespace std;
class A
{
protected:
    int a;

public:
    void take()
    {
        cout << "\n enter number";
        cin >> a;
    }
};
class B
{
protected:
    int b;

public:
    void takee()
    {
        cout << "\nenter no";
        cin >> b;
    }
};
class C : public A, public B // here you can take a and b public private or protected
{
public:
    void addition()
    {
        cout << "\n addition " << a + b;
    }
};
int main()
{
    C aa;
    aa.take();
    aa.takee();
    aa.addition();
    return 0;
}