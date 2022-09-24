#include<iostream>
using namespace std;
int addNumber(int a,int b); //function prototype
int main()
{
int n1,n2,sum;
cout<<"enter two numbers";
cin>>n1>>n2;

sum=addNumber(n1,n2);//function call
cout<<"sum is"<<sum;
return 0;
}
int addNumber(int a ,int b)//function defination
{
    int mayuradd;
    mayuradd=a+b;
    return mayuradd;//return  statement
}
