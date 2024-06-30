#include <bits/stdc++.h>
using namespace std;
class A
{
    int a;
    static int b;

public:
    A(int x, int y)
    {
        a = x, b = y;
    }
    void show()
    {
        cout << a << " " << b;
    }
    static void disp()
    {
        cout << b << endl;
    }
};
int A::b = 0;
int main()
{
    // A obj(10, 20);
    // A obj1(10, 200);
    // obj.disp();
    // A::disp();
    // obj.show();
    // return 0;

   const int x=10;
  // x = 10;
   printf("%d", x);
   return 0;

}