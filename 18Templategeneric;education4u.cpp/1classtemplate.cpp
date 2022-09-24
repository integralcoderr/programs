#include <iostream>
using namespace std;
template <class T>
void swapme(T &x, T &y)
{
    T temp = x;
    x = y;
    y = temp;
}
int main()
{
    int a, b;
    cout << "Enter two integer values: ";
    cin >> a >> b;
    swapme(a, b);
    cout << "After swap a = " << a << ", b = " << b << endl;
    double p, q;
    cout << "Enter two double values: ";
    cin >> p >> q;
    swapme(p, q);
    cout << "After swap p = " << p << ", q = " << q;
    char x,y;
    cout<<"enter 2 character values";
    cin>>x>>y;
    swapme(x,y);
    return 0;
}