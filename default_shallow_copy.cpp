#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    float* cgpaPtr;

    Student(string name, float cgpa)
    {
        this->name = name;
        cgpaPtr = new float;
        *cgpaPtr = cgpa;
    }

    // Student(Student &obj)
    // {
    //     this->name = obj.name;
    //     cgpaPtr = new float;
    //     *cgpaPtr = *obj.cgpaPtr;

    //     // this->cgpaPtr = obj.cgpaPtr; //--> It will give shallow copy
    // }

    ~Student()
    {
        cout<<"Over Good byy\n";
        delete cgpaPtr; //memory leak
        cout<<*cgpaPtr;
    }

    void getInfo()
    {
        cout << "Name: " << name << '\n'
             << "Cgpa: " << *cgpaPtr << '\n';
    }
};

int main()
{
    Student s1("Mritunjay", 8.51);
    s1.getInfo();
    
    // Student s2(s1);
    // *(s2.cgpaPtr) = 9.2;
    // s2.getInfo();

    // s1.getInfo();
    return 0;
}