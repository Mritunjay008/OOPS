#include <bits/stdc++.h>
using namespace std;

class Parent
{
public:
    void getInfo()
    {
        cout<<"I am from parent\n";
    }

    virtual void hello()
    {
        cout<<"Hello Mam\n";
    }
};

class Child : public Parent
{
public:
    void getInfo()
    {
        cout<<"I am from Child\n";
    }
    void hello()
    {
        cout<<"Hello Sir\n";
    }
};

int main()
{
    Parent p1;
    p1.getInfo();

    Child c1;
    c1.hello();
    return 0;
}