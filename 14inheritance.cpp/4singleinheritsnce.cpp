#include <iostream>
using namespace std;
class person
{
public:
    string profession;
    int age;
    person() : profession("unemployed"), age(16) {}
    void display()
    {
        cout << "my profession is " << profession << endl;
        cout << "my age is " << age << endl;
    }
    void walk()
    {
        cout << "i can walk" << endl;
    }
    void talk()
    {
        cout << "i can talk" << endl;
    }
};
// MathsTeacher class is drived from base class person.
class mathteacher : public person
{
public:
    void teachmaths()
    {
        cout << "i can teach maths" << endl;
    }
};
class footballer : public person
{
public:
    void playfootball()
    {
        cout << "i can play football" << endl;
    }
};
int main()
{
    mathteacher teacher;
    teacher.profession = "teacher";
    teacher.age = 23;
    teacher.display();
    teacher.teachmaths();

    footballer footballer;
    footballer.profession = "Footballer";
    footballer.age = 19;
    footballer.display();
    footballer.playfootball();

    return 0;
};
