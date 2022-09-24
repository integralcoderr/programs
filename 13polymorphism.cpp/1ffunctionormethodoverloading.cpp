#include <iostream>
using namespace std;
void add(int, int);
void add(int, float);
void add(int, int, int);
void add(int a,int b)
{
    cout << "\n addition =" << a + b;
}
void add(int a, float b)
{
    cout << "\n addition =" << a + b;
}
void add(int a, int b, int c)
{
    cout << "\n additon=" << a + b + c;
}
int main()
{
    add(2, 3);
    add(10, 20.10, 30);
    add(10, 20, 30);
    return 0;
}