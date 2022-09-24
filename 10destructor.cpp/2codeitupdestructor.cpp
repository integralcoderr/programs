//here in this program 1 constructor and one 
//destructor is created 
//destructor is used to dellocate the memory consumed by object of the constructor

#include<iostream>
using namespace std;
int count=0;
class demo
{
    public:
    demo()//constructor
    {
       count++;
       cout<<"\n no of object created"<<count;
    }
    ~demo()//destructor
    {
        count--;
        cout<<"\n no of object destroyed"<<count;
    }
};
int main()
{
    demo aa,bb,cc;
    {
        demo dd;
        
    }
    return 0;
}