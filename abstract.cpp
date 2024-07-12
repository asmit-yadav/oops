#include <bits/stdc++.h>
using namespace std;
class a{
    public:
   
    virtual void fun();
    virtual void fun1();
    
};
class b : public a{
    public:
    void fun()
    {
        cout<<"class b is fun called"<<endl;
    }
    void fun1()
    {
        cout<<"class b fun 1 is called"<<endl;
    }
};
class c: public a{
    public:
    void fun()
    {
        cout<<"class b is fun called"<<endl;
    }
    void fun1()
    {
        cout<<"class b fun 1 is called"<<endl;
    }
};


int main()
{
    a *p;
    b o;
    p=&o;
    o.fun();
    p->fun1();
    return 0;
}