#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    char name[100];
    long roll;
    double cgpa;
};
int main()
{
    Student a;
    a.cgpa = 3.73;
    a.roll = 2512131642;
    char temp[100] = "Apon";
    strcpy(a.name, temp);
    // a.name="apon"; its not possible. we cant defined like this.
    cout << a.name << " " << a.roll << " " << a.cgpa << endl;
}