#include <iostream>
using namespace std;
void swap(char &x, char &y)
{
    char t;
    t = x;
    x = y;
    y = t;
}
void swap(int &x, int &y)
{
    int t;
    t = x;
    x = y;
    y = t;
}
void swap(float &x, float &y)
{
    float t;
    t = x;
    x = y;
    y = t;
}
int main()
{
    char ch1, ch2;
    cout << "\nenter values";
    cin >> ch1 >> ch2;
    swap(ch1, ch2);
    cout << "\nAfter swap ch1=" << ch1 << "ch2=" << ch2;

    int a, b;
    cout << "\nenter values";
    cin >> a >> b;
    swap(a, b);
    cout << "\nafter swap a=" << a << "b=" << b;

    int c, d;
    cout << "\nenter values";
    cin >> c >> d;
    swap(c, d);
    cout << "\nafter swap c=" << c << "d=" << d;
}
