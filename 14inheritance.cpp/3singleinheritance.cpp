#include <iostream>
using namespace std;
class A
{
protected:
    int x;

public:
    void input() //taken a class
    {
        cout << "\n enter number";
        cin >> x;
    }
};
class B : public A // inheriting class a in class b
{
    int y;

public:
    void getdata()
    {
        cout << "enter 2nd number";
        cin >> y;
    }
    void putdata()
    {
        cout << "\n addition=" << x + y;
    }
};
int main()
{
    B aa;
    aa.input();
    aa.getdata();
    aa.putdata();
    return 0;
}