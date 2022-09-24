//friend function is not a part of any class so
//so we dont need object
#include<iostream>
using namespace std;
class B;
class A
{
    int a,sum;
    public:
    void input()
    {
        cout<<"\nenter no";
        cin>>a;
    }
    friend void max(A,B);
};
class B
{
    int b;
    public:
    void getdata()
    {
        cout<<"\nenter no";
        cin>>b;
    }
    friend void max(A,B);
};
void max(A aa,B bb)
{
    if(aa.a>bb.b)
    cout<<"\nmax="<<aa.a;
    else
    cout<<"\nmax="<<bb.b;
};
int main()
{
    A aa;B bb;
    aa.input();
    bb.getdata();
    max(aa,bb);
    return 0;
}