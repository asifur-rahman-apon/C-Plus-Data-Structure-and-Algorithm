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
    Student b;
    cout << "Enter 1st Student Name:";
    cin >> a.name;
    cout << "Enter 1st Student Roll:";
    cin >> a.roll;
    cout << "Enter 1st Student Cgpa:";
    cin >> a.cgpa;
    cout << "Enter 2nd Student Name:";
    cin >> b.name;
    cout << "Enter 2nd Student Roll:";
    cin >> b.roll;
    cout << "Enter 2nd Student Cgpa:";
    cin >> b.cgpa;
    cout << "1st Student Name:" << a.name << "1st Student Roll:" << a.roll << "1st Student Cgpa:" << a.cgpa << endl;
    cout << "2nd Student Name:" << b.name << "2nd Student Roll:" << b.roll << "2nd Student Cgpa:" << b.cgpa << endl;
}