#include<bits/stdc++.h>
using namespace std;

class Teacher
{
   //properties
   string name;
   string dep;
   string sub;
   double salary;

   // metods // member function
   public:
   void change_dep(string new_dep)
   {
    dep=new_dep;
   }
   void set_name(string nme)
   {
    name=nme;
   }
    void show()
   {
    cout<<name;
   }
};
int main()
{
Teacher t1;
t1.set_name("asmit");
t1.show();


return 0;
}