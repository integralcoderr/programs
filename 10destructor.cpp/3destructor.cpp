#include<iostream>
using namespace std;
class ABC
{
    public:
    ABC()//constructor defined
    {
        cout<<"hey look i am in constructor"<<endl;
    }
    ~ABC()//destructor defined
    {
        cout<<"hey look i am in destructor"<<endl;
    }
};
int main()
{
    ABC cc1;//constructor is called
    cout<<"function main is terminating"<<endl;
    /*object cc1 goes out of scope ,now destructor is being called*/
    return 0;
}//end of the program 