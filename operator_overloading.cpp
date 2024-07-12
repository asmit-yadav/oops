#include <bits/stdc++.h>
using namespace std;
class Complex
{
private:
    int a, b;

public:
    void set(int x, int y)
    {
        a = x;
        b = y;
    }
    void show()
    {
        cout << "\na=> " << a << "\nb=> " << b;
    }
    // Complex operator +(Complex c)
    // {
    //     Complex temp;
    //     temp.a = a + c.a;
    //     temp.b = b + c.b;
    //     return temp;
    // }
    // Complex operator-()
    // {
    //     Complex temp;
    //     temp.a=-a;
    //     temp.b=-b;
    //     return temp;
    // }
    friend Complex operator +(Complex,Complex);
    friend Complex operator -(Complex);

};
Complex operator +(Complex X,Complex Y)
{
    Complex temp;
    temp.a=X.a+Y.a;
    temp.b=X.b+Y.b;
    return temp;
}
Complex operator -(Complex C)
{
    Complex temp;
    temp.a=-C.a;
    temp.b=-C.b;
    return temp;
}
int main()
{
    Complex c1,c2,c3;
    c1.set(3, 4);
    c2.set(5, 6);

   c3 = c1+c2;
   // c3.show();
   c2=-c1;
   c3.show();
   c2.show();
   return 0;
}