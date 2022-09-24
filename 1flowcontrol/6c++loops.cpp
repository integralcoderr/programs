#include <iostream>
using namespace std;
int main()
{
    int i, n, factorial = 1;
    cout << "enter a positive integer";
    cin>>n;
    for (i = 1; i <= n; ++i)
    {
        factorial *= i;
    }
    cout << "factorial of" << n << "=" << factorial;
    return 0;
}