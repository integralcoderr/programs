#include<iostream>
using namespace std;
int main()
{
    float arr[5];
    float *ptr;
    cout<<"displaying address using arrays"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<"&arr["<<i<<"]="<<&arr[i]<<endl;
    }
    //ptr=&arr[0]
    ptr=arr;
    cout<<"\nDisplaying address using pointer"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<"ptr+"<<i<<"="<<ptr+i<<endl;
    }
    return 0;
} 