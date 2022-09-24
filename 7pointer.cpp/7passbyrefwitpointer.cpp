#include<iostream>
using namespace std;
//function prototype;
void swap(int* ,int *);
int main()
{
    int a,b;
cout<<"enter a and b";
cin>>a>>b;
cout<<"before swapping"<<endl;
cout<<"a="<<a<<endl;
cout<<"b="<<b<<endl;
swap(&a,&b);
cout<<"\n after swapping"<<endl;
cout<<"a="<<a<<endl;
cout<<"b="<<b<<endl;
return 0;

}
void swap(int* n1,int*n2)
{
    int temp;
    temp=*n1;
    *n1=*n2;
    *n2=temp;
}