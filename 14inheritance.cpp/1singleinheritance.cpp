#include<iostream>
using namespace std;
class A
{
    protected:
    int a;
    public:
    void inputa()
    {
        cout<<"\n enter first number";
        cin>>a;
    }
};
class B:public A
{
    protected:
    int b;
    public:
    void inputb()
    {
        cout<<"\n enter second number";
        cin>>b;
    }
    void add()
    {
        cout<<"\naddition ="<<a+b;  
    }
};
int main()
{
    B aa;
    aa.inputa();
    aa.inputb();
    aa.add();
    return 0;
}
