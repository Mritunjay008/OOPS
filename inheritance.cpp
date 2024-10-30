#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    int age;

    Person(string name, int age)
    {
        this->age = age;
        this->name = name;
    }
    // Person()
    // {
    //     cout << "Hello";
    // }
};

class Student : private Person
{
public:
    Student(string name, int age, int roll): Person(name, age)
    {
        this->roll = roll;
    }
    int roll;

    void getInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "roll: " << roll << endl;
    }
};

int main()
{
    Student s1("Mritunjay", 21, 10);
    s1.getInfo();
    return 0;
}