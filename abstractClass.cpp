#include<bits/stdc++.h>
using namespace std;

class Shape
{
public:
    virtual void shape() = 0;//pure virtual function
};

class Circle:public Shape
{
public:
    void shape()
    {
        cout<<"Circle hai bhaiyaa";
    }
};

int main()
{
    Circle c1;
    c1.shape();
    return 0;
}