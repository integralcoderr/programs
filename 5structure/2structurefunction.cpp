#include<iostream>
using namespace std;
struct person
{
    char name[50];
    int age;
    float salary;
};
void displayData(person);  //functiondeclaration
int main()
{
    person p;
    cout<<"enter full name";
    cin.get(p.name,50);
    cout<<"enter age";
    cin>>p.age;
    cout<<"enter salary";
    cin>>p.salary;
    //function call with structure variable as an argument
    displayData(p);
    return 0;
}
void displayData(person p)
{
    cout<<"\n Displaying Information"<<endl;
    cout<<"Name:"<<p.name<<endl;
    cout<<"age"<<p.age<<endl;
    cout<<"salary:"<<p.salary;
}