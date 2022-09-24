#include<iostream>
using namespace std;
int prime();
int main()
{
    int num,i,flag=0;
    num = prime(); // no argument is passed to prime()
    for(i=2;i<num/2;i++)
    {
        if(num%i==0)
        {
            flag=1;
            break;
        }
    }   
    if(flag==1)
    {
        cout<<num<<"is not  a prime number";
    }
    else
    {
        cout<<num<<"is a prime number";
    }
    return 0;
}
//return type of function is int
int prime()
{
    int n;
    printf("enter a positive integer");
    cin>>n;
    return n;
}