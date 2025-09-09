#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int mathmark;
    int sciencemark;
    Student(string name, int roll, int mathmark, int sciencemark)
    {
        this->mathmark = mathmark;
        this->name = name;
        this->roll = roll;
        this->sciencemark = sciencemark;
    }
    void add_marks()
    {
        cout << "Total Marks:" << mathmark + sciencemark << endl;
    }
};
int main()
{
    Student rahim("RahimHossain", 21, 34, 56);
    Student karim("Karim Hosssain", 34, 56, 78);
    rahim.add_marks();
    karim.add_marks();
}