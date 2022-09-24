#include<iostream>
using namespace std;
void add(int a,int b)
{
    cout<<a+b<<"\n";
}
void add(int a,float b,int c)
{
    cout<<a+b+c<<"\n";
}
int main()
{
    add(2,3);
    add(5,10.5,15);
    return 0;
}