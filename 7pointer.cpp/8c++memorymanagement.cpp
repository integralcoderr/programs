#include<iostream>
//c+= program to store gpa of n number of students and display
//it where n  is the no of students entered ny user
using namespace std;
int main()
{
    int num;
    cout<<"enter totoal number of students";
    cin>>num;
    float* ptr;
    //memory allocation of number of floats";
    ptr=new float[num];

    cout<<"enter gpa of students"<<endl;
    for(int i=0;i<num;i++)
    {
        cout<<"Student"<<i+1<<":";
        cin>>*(ptr+i);
    }
    cout<<"\nDisplaying GPA of students"<<endl;
    for(int i=0;i<num;i++)
    {
        cout<<"student"<<i+1<<":"<<*(ptr+i)<<endl;
    }
    //ptr memory is released
    delete[]ptr;
    return 0;

}