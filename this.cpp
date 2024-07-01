#include <bits/stdc++.h>
using namespace std;
class A
{
private:
    int x;
    int y;

public:
    // Non - parametrized constructor
    A()
    {
        cout << "Constructor is called!\n";
    }
    // Parametrized constructor
    A(int x, int y)
    {
        // cout<<a<<" "<<b;
        this->x = x;
        this->y = y;
    }
    // copy constructor
    A(A &obj) // pass by refrence
    {
        cout<<"copy constructor !"<<endl;
        this->x=obj.x;
        this->y=obj.y;
    }
    void show()
    {
        cout << x << " " << y;
    }
};
int main()
{
    A ob1(10, 20);
    A ob(ob1); // copy costructor
    ob.show();
}