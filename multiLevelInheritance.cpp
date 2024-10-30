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
    void getInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "roll: " << roll << endl;
    }
};
class gradStudent : public Student
{
public:
    string researchArea;
    void getInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "roll: " << roll << endl;
        cout << "Research Paper: " << researchArea << endl;
    }
};

int main()
{
    gradStudent s1;
    s1.name = "Mritunjay";
    s1.age = 22;
    s1.roll = 10;
    s1.researchArea = "AIML";
    s1.getInfo();
    return 0;
}