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
        (*this).cls = cls; // here this is a pointer
        this->roll = roll;
        this->cgpa = cgpa;
    }
};
int main()
{
    Student a(5, 5, 5);
    Student b(10, 4, 3);
    cout << a.cls << " " << a.roll << " " << a.cgpa << endl;
    cout << b.cls << " " << b.roll << " " << b.cgpa << endl;
}