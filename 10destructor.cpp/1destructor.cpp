#include<iostream>
using namespace std;
class Demo
{
    private:
    int num1,num2;
    public:
    Demo(int n1,int n2)
    {
        cout<<"inside constructor"<<endl;
        num1=n1;
        num2=n2;
    }
    void display()
    {
        cout<<"num1="<<num1<<endl;
        cout<<"num2="<<num2<<endl;
    }
    ~Demo()
    {
        cout<<"inside Destructor";
    }
};
int main()
{
    Demo obj1(10,20);
    obj1.display();
    return 0;
}