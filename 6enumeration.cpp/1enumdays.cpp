#include<iostream>
using namespace std;
enum week{sundayt,monday,tuesday,wednesday,thursday,friday,saturday};
int main()
{
    week today;
    today=wednesday;
    cout<<"day"<<today+1;
    return 0;
}
