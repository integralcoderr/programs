 #include<iostream>
 using namespace std;
 class time
 {
     int h,m;
     public:
     void getdata();
     void add(time,time);
     void putdata();
 };
 void time::getdata()
 {
     cout<<"\n enter hours and minutes";
     cin>>h>>m;
 }
void time::add(time aa,time bb)
{
    h=(aa.m+bb.m)/60;
    m = (aa.m + bb.m) % 60;
    h=h+aa.h+bb.h;
}
void time::putdata()
{
    cout<<"\n time is "<<h<<"hours"<<m<<"minutes";
}
int main()
{
    time aa,bb,cc;
    aa.getdata();
    bb.getdata();
    cc.getdata();
    aa.putdata();
    bb.putdata();
    cc.putdata();
    return 0;
}