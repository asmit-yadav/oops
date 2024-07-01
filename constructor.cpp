#include<bits/stdc++.h>
using namespace std;
class A
{
   private:
   int x;int y;
   public:
   // Non - parametrized constructor
   A()
   {
    cout<<"Constructor is called!\n";
   }
   // Parametrized constructor
   A(int a,int b)
   {
    //cout<<a<<" "<<b;
    x=a;
    y=b;
   }
   void show()
   {
    cout<<x<<" "<<y;
   }
};
int main()
{
   A ob1(10,20),ob;
   
   ob1.show();
}