#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    int age;
};

class Student : public Person
{
public:
    int roll;
};

class Teacher : public Person
{
public:
    int salary;
    string subject;
};

int main()
{
    Student s1;
    s1.name = "Mritunjay";
    s1.age = 22;
    s1.roll = 10;

    Teacher t1;
    t1.name = "Paridhi";
    t1.age = 20;
    t1.salary = 20000;
    t1.subject = "Physics";

    cout<<s1.name<<endl;
    cout<<s1.age<<endl;
    cout<<s1.roll<<endl;
    cout<<"Teacher --->>"<<endl;
    cout<<t1.name<<endl;
    cout<<t1.age<<endl;
    cout<<t1.salary<<endl;
    cout<<t1.subject<<endl;
    return 0;
}