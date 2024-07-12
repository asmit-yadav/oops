#include <bits/stdc++.h>
using namespace std;

class Parent
{
public:
    void show()
    {
        cout << "Parent Class \n";
    }
};
class child : public Parent
{
public:
    void show()
    {
        cout << "child Class \n";
    }
};
int main()
{
    child obj;
    obj.show();
    return 0;
}
