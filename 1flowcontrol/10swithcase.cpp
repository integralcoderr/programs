#include<iostream>
using namespace std;
int main()
{
    char o;
    float num1,num2;
    cout<<"enter an oprator(+,-,*,/)";
    cin>>o;
    cout<<"enter two operands";
    cin>>num1>>num2;
    switch(o)
    {
        case '+':
        cout<<num1<<"+"<<num2<<"="<<num1+num2;
        break;

        case '-':
        cout<<num1<<"-"<<num2<<"="<<num1-num2;

        default:
        cout<<"error operator is not correct";
        break;

    }
    return 0;
}
