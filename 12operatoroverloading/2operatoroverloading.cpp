#include<iostream>
using namespace std;
class test
{
    private:int count;
    public:test():count(5)
    {

    }
    void operator ++()
    {
        count=count+1;
    }
    void display()
    {
        cout<<"count:"<<count;
    }
};
int main()
{
    test t;//this calls "function void operatoor ++()"function
    ++t;
    t.display();
    return 0;
}