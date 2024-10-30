#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int age;
    int roll;
};

class Teacher
{
public:
    int salary;
    string subject;
};
class TeachingAssistant : public Student, public Teacher
{
public:
    string researchArea;
    void getInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "roll: " << roll << endl;
        cout << "Research Paper: " << researchArea << endl;
        cout << "Salary: " << salary << endl;
        cout << "Subject: " << subject << endl;
    }
};

int main()
{
    TeachingAssistant s1;
    s1.name = "Mritunjay";
    s1.age = 22;
    s1.roll = 10;
    s1.researchArea = "AIML";
    s1.salary = 20000;
    s1.subject = "Physics";
    s1.getInfo();
    return 0;
}