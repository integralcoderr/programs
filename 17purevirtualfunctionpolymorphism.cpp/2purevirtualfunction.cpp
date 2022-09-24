//pure virtual function
#include<iostream>
using namespace std;
class bc
{
    public:
    virtual void display()=0;
};
class dc :public bc
{
    public:
    void display()
    {
        cout<<"this is simple illustration of abstract class and pure virtual function ";
    }
};
int main()
{
    dc obj;
    obj.display();
    return 0;
}