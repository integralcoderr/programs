#include <iostream>  //class A for rollno
using namespace std; // class B for subjects
                     // class C for total marks
class A
{
protected:
    int roll;

public:
    void getroll()
    {
        cout << "\nenter roll no";
        cin >> roll;
    }
    void putroll()
    {
        cout << "\nroll no=" << roll;
    }
};
class B
{
protected:
    int subject1, subject2;

public:
    void getmarks()
    {
        cout << "\nenter marks of 1st subject";
        cin >> subject1;
        cout << "\nenter marks of 2nd subject";
        cin >> subject2;
    }
    void putmarks()
    {
        cout << "\nmarks1=" << subject1;
        cout << "\nmarks2=" << subject2;
    }
};
class C : public B,public A
{
    int sportsmarks;

public:
    void getsportsmarks()
    {
        cout << "enter sports marks";
        cin >> sportsmarks;
    }
    void total()
    {
        putroll();
        putmarks();
        cout << "\ntotal marks=" << subject1 + subject2 + sportsmarks;
    }
    int main()
    {
        C aa;
        aa.getroll();
        aa.getmarks();
        aa.getsportsmarks();
        aa.total();
        return 0;
    }
};