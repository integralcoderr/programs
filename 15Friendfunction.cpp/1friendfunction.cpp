//there is no difference if we declare friend function in public or private
#include<iostream>
using namespace std;
class demo
{
    int a,b;
    public:
    void getdata();
    friend int sum(demo);
};
void demo::getdata()
{
    cout<<"\nenter numbers";
    cin>>a;
    cout<<"\nenter 2nd number";
}
int sum(demo aa)
{
    return (aa.a+aa.b);
}
int main()
{
    demo aa;
    aa.getdata();
    cout<<"addition is="<<sum(aa);
    return 0;
}