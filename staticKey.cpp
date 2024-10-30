#include<bits/stdc++.h>
using namespace std;

void fun()
{
    static int x = 2; 
    cout<<x;
    x++;
}

class A
{
public:
    static int x;

    void incX()
    {
        x++;
    }
};

class ABC
{
public:
    ABC()
    {
        cout<<"Constructor\n";
    }
    ~ABC()
    {
        cout<<"Destructor\n";
    }
};

int main()
{
    if(true)
    {
        static ABC a1;
    }
    cout<<"Good bye main\n";

    // fun(); 
    // fun(); 
    // fun(); 
    return 0;
}