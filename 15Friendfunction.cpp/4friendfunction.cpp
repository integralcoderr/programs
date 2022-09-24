#include<iostream>
using namespace std;
class B;
class A
{
    private:
    int numA;
    public:
    A():numA(12){}
    friend int add(A,B);
};
class B
{
    private:
    int numB;
    public:
    B(): numB(1){}
        friend int add(A,B);// friend function declaration
    
};
int add(A objectA,B objectB)
{
    return (objectA.numA+objectB.numB);
}
int main()
{
    A objectA;
    B objectB;
    cout<<"sum:"<<add(objectA,objectB);
    return 0;
}