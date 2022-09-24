#include<iostream>
using namespace std;
void prime();
int main()
{
    prime();//no argument is passed tp prime()
    return 0;
}
void prime()
{
    int num,i,flag=0;
    cout<<"enter a positive integer";
    cin>>num;
    for(i=2;i<=num/2;i++)
    {
        if(num%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        cout<<num<<"is not a prime";

    }
    else
    {
        {
            cout<<num<<"is a prime number";
        }
    }
    
}
