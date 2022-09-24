#include<iostream>
using namespace std;
int main()
{
    long long int number,i=1,factorial=1;
    cout<<"enter a positive integer";
    cin>>number;
    while(i<=number)
    {
        factorial*=i;
        ++i;
    }
    cout<<"factorial of"<<number<<"="<<factorial;
    return 0;
}