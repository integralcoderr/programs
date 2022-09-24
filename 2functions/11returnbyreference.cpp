#include<iostream>
using namespace std;
//global variable
int num;
//function declaration
int& test();
int main()
{
    test()=5;
    cout<<num;
    return 0;
}
int& test()
{
    return num;
}