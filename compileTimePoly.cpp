#include<bits/stdc++.h>
using namespace std;

class Print
{
public:
    void show(int x)
    {
        cout<<"Integer: "<<x<<endl;
    }
    void show(char x)
    {
        cout<<"char: "<<x<<endl;
    }
};

int main()
{
    Print p1;
    p1.show(9);
    p1.show('A');
    return 0;
}