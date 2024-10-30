#include <bits/stdc++.h>
using namespace std;

class Teacher
{
    // Properties or Attributes
private: // we do not want to show it to everyone so we hide this data --> Encapsulation
    int salary;

public:
    string name;
    string dept;
    string subject;

    // Constructor
    Teacher()
    { //---> Non Parameterized
        dept = "Computer Science";
    }

    // Teacher(string n, string d, string s, int sal){ //---> Parameterized
    //     dept = d;
    //     name = n;
    //     salary = sal;
    //     subject = s;
    // }

    // Concept of this pointer (this.object = constructer parameter)
    Teacher(string name, string dept, string subject, int salary)
    { //---> Parameterized
        this->dept = dept;
        this->name = name;
        this->salary = salary;
        this->subject = subject;
    }

    // Copy Constructor
    Teacher(Teacher &obj) // -> Pass by reference
    {
        cout<<"Copy constructor hai bhaiyaa\n";
        this->name = obj.name;
        this->dept = obj.dept;
        this->subject = obj.subject;
        this->salary = obj.salary; 
    }

    // Methods or functions or member functions
    void changeDept(string newDept)
    {
        dept = newDept;
    }

    // setter
    void setSalary(int s)
    {
        salary = s;
    }
    // getter
    int getSalary()
    {
        return salary;
    }
};

int main()
{
    Teacher t1; // automatically constructor is called
    t1.name = "Paridhi";
    t1.subject = "DBMS";
    // t1.dept = "Computer Science";
    t1.setSalary(23000);

    Teacher t2("Mritunjay", "Machine Learning", "Machine Learning", 320000);
    // cout << t2.name;

    //Copy constructor
    Teacher t3(t2);
    cout<<t3.name;
    return 0;
}