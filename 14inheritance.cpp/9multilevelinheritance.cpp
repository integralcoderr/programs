 #include<iostream>
 using namespace std;
 class A
 {
     protected:
     int a;
     public:
     void geta()
     {
          cout<<"\nenter a number";
          cin>>a;
     }
 };
 class B:public A
 {
     protected:
     int b;
     public:
     void getb()
     {
         cout<<"\n enter b number";
         cin>>b;
     }

 };
 class C:public B
 {
     int c;
     public:
     void putdata()
     {
         c=a+b;
         cout<<"\n addition ="<<c;
     }
 };
 int main()
 {
     C aa;
     aa.geta();
     aa.getb();
     aa.putdata();
     return 0;
 }