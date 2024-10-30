#include<bits/stdc++.h>
using namespace std;

class Student
{
public :
    string name;
    Student()
    {

    }
    Student(string name)
    {
        this->name = name;
    }
};

int main()
{
    Student s1("Mritunjay");
    cout<<s1.name<<endl;

    Student s2;
    s2.name = "Paridhi";
    cout<<s2.name;
    return 0;
}