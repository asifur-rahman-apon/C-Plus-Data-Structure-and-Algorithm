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
    Student a, b;
    cin.getline(a.name, 100); // getline we used just bcz get the full name with spaces
    cin >> a.roll >> a.cgpa;
    cin.ignore(); // we use it beacuse after enter a.cgpa we press enter compiler take that space as a input. so we dont get actual input of b.name
    cin.getline(b.name, 100);
    cin >> b.roll >> b.cgpa;
    cout << "1st Student Name:" << a.name << " " << "1st Student Roll:" << a.roll << " " << "1st Student Cgpa:" << a.cgpa << endl;
    cout << "2nd Student Name:" << b.name << " " << "2nd Student Roll:" << b.roll << " " << "2nd Student Cgpa:" << b.cgpa << endl;
}