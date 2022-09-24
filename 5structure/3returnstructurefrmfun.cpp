#include<iostream>
using namespace std;
struct person{
    char name[50];
    int age;
    float salary;
};
person getData(person);
void displayData(person);
int main()
{
    person p;
    p= getData(p);
    displayData(p);
    return 0;
}
person getData(person p)
{
    cout<<"enter full name";
    cin.get(p.name,50);
    cout<<"enter age";
    cin>>p.age;
    cout<<"enter salary";
    cin>>p.salary;
    return p;

}
void dispalyData(person p)
{
    cout<<"\n Displaying information"<<endl;
    cout<<"name"<<p.name<<endl;
    cout<<"age:"<<p.age<<endl;
    cout<<"Salary:"<<p.salary;
}