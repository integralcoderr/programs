//one base class is derived by other base class
#include <iostream>
using namespace std;
class A
{
protected:
    int x;

public://here class a single base class class A is derived by single
        //derived class b
    void mayurshow()//void input() //taken a class
    {
        cout << "\n enter number";
        cin >> x;
    }
};
class B :public A//inheriting base class ,class a is derived by class b
{
    int y;

public:
    void mayurshoww()//void getdata()
    {
        cout << "enter 2nd number";
        cin >> y;
    }
    void mayuradd()//void putdata()
    {
        cout << "\n addition=" << x + y;
    }
};
int main()
{
    B perform;          //B aa;//object is being created
    perform.mayurshow();//aa.input();
    perform.mayurshoww();//aa.voidgetdata
    perform.mayuradd();//aa.putdata
    return 0;
}