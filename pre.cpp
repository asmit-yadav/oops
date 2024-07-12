#include <bits/stdc++.h>
using namespace std;
class Integer
{
    private:
    int x;
    public:
    void set(int a)
    {
        x=a;
    }
    void show()
    {
        cout<<"\nx=> "<<x;
    }
   friend Integer operator ++(Integer);
    // {
    //     Integer i;
    //     i.x=++x;
    //     return i;
    // }

};
Integer operator ++(Integer i)
{
    Integer temp;
    temp.x=++i.x;
    return temp;
}
int main()
{
   Integer i1,i2,i3;
   i1.set(3);
   //i1.show();
   i2=++i1;
   //i1.show();
   i2.show();
   return 0;
}