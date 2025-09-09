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
    Student a(5, 5, 5);
    Student *p = &a;
    return p;
}

int main()
{
    Student *obj = fun();

    cout << obj->cls << " " << (*obj).roll << " " << obj->cgpa << endl;
}

/*
now we are getting gerbage value. as fun function return a pointer p.
in main function obj pointer receive that . that means receive the address.
but after fun is called. the func got destroyed. so obj pointer didnt get any value in the address.
so ouput is gerbage values.
*/

// solve in the dynamic object.cpp