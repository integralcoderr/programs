#include<iostream>
// Object-oriented approach to handle above program in C++.
using namespace std;
class test
{
    private:
    int num;
    float *ptr;
    public:
    test()
    {
        cout<<"enter total number of students";
        cin>>num;
        ptr=new float[num];
        cout<<"enter GPA of the students"<<endl;
        for (int i = 0; i < num; i++)
        {
            cout<<"student:"<<i+1<<":";
            cin>>*(ptr+i);
        }
        
    }
    ~test()
    {
        delete[] ptr;
    }
    void Display()
    {
        cout<<"\n Displayin GPA of students"<<endl;
        for(int i=0;i<num;i++)
        {
            cout<<"student"<<i+1<<":"<<*(ptr+i)<<endl;
        }
    }
};
int main()
{
    test s;
    s.Display();
    return 0;
}