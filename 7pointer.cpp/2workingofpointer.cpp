#include<iostream>
using namespace std;
int main()
{
    int *pc,c;
    c=5;
    cout<<"address of c(&c)"<<&c<<endl;
    cout<<"value of c (c):"<<c<<endl<<endl;
    pc=&c;//pointer pc holds the memory address of variable c
    cout<<"address that pointer pc holds(pc):"<<pc<<endl;
    cout<<"content of the address pointer pc holds (*pc):"<<*pc<<endl<<endl;
    c=11;//the content inside memory address &c is changed from 5 to 11
    cout<<"address pointer pc holds(pc):"<<pc<<endl;
    cout<<"content of the address pointer pc holds(*pc):"<<*pc<<endl<<endl;
    *pc=2;
    cout<<"address of c(&c):"<<&c<<endl;
    cout<<"value of c (c):"<<c<<endl<<endl;
    return 0;


}