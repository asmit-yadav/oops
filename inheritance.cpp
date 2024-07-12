#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    int x;
    int y;
    Person(int x, int y)
    {
        cout << "Parent constructor called!" << endl;
        this->x = x;
        this->y = y;
    }
    // ~Person() {
    //     cout << "Parent destructor called!" << endl;
    // }
     void getinfo()
    {
        cout << x << endl;
        cout << y << endl;
        // cout << roll << endl;
    }
};

class student : public Person
{
public:
    // int roll;
    student(int x, int y) : Person(x, y)
    { // Explicitly call the Person constructor
        cout << "Child constructor called!" << endl;
        this->x = x;
        this->y = y;
    }
    // ~student() {
    //     cout << "Child destructor called!" << endl;
    // }
    void getinfo()
    {
        cout << x << endl;
        cout << y << endl;
        // cout << roll << endl;
    }
};

int main()
{
    
    Person ob1(20, 30);
    student ob(10, 20);
    ob.getinfo();
    ob1.getinfo();
}
