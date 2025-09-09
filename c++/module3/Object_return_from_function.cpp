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
Student fun()
{
    Student a(5, 5, 5);
    return a;
}

int main()
{
    Student obj = fun();

    cout << obj.cls << " " << obj.roll << " " << obj.cgpa << endl;
}
// we can get static variable but not static array. as it destroyed after func is called.thats why we use dynamic memoery allocarion
// here we see that we can get static obj just like static variable.