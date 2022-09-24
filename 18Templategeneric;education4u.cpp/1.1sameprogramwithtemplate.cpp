#include <iostream>
using namespace std;
template <class T>
void swapme(T &x, T &y)
{
    T temp;
    temp = x;
    x = y;
    y = temp;
}
int main()
{
    char ch1, ch2;
    cout << "\nenter value";
    cin >> ch1 >> ch2;
    swapme(ch1, ch2);
    cout << "\nAfter swap ch1=" << ch1 << "ch2=" << ch2;

    int a, b;
    cout << "\nenter values";
    cin >> a >> b;
    swapme(a, b);
    cout << "\nafter swap a=" << a << "b=" << b;

    float c, d;
    cout << "\nenter values";
    cin >> c >> d;
    swapme(c, d);
    cout << "\nafter swap c=" << c << "d=" << d;
    return 0;
}