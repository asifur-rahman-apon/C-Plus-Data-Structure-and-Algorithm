#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int cls;
    int roll;
    double cgpa;
    Student(int cls, int roll, int cgpa)
    {
        this->cls = cls;
        this->roll = roll;
        this->cgpa = cgpa;
    }
};
Student *fun()
{
    Student *Karim = new Student(4, 7, 1); // dynamic object

    return Karim;
}

int main()
{
    Student *obj = fun();

    cout << obj->cls << " " << (*obj).roll << " " << obj->cgpa << endl;
}

/*
fun func in in stack memory. when it creates a dymanic object it stores the value in heap memory.
then it paases the address to obj pointer in main.so in main obj pointer go to that object and found values.
as values stored in dynamic memory means in heap memory
*/