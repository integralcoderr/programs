#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"enter an integer";
    cin>>number;
    if(number>=0)
    {
        cout<<"you entered a positive integer"<<number<<endl;

    }
    else
    {
        cout<<"you entered a negative number"<<number<<endl;
    }
    
    cout<<"this statement is always executed";
    return 0;
}