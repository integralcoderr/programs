#include <iostream>
using namespace std;
int main()
{   int i;
    float arr[5];
    // inserting data using pointer notation
    cout<<"enter 5 numbers";
    for(int i=0;i<5;i++)
    {
    cin>>*(arr+i);
    }
    //displaying data using pointer notation
    cout<<"displaying data"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<*(arr+i)<<endl;
    }  
    return 0;
}      