#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double number,squareroot;
    cout<<"enter a number";
    cin>>number;
    //squrt() is a library function to calculate square root
    squareroot =sqrt(number);
    cout<<"square root of"<<number<<"="<<squareroot;
    return 0;
}