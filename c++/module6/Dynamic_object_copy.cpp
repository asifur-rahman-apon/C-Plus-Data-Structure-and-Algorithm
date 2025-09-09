#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;

    Student(string name, int roll)
    {

        this->name = name;
        this->roll = roll;
    }
};
int main()
{
    Student *rahim = new Student("Rahim Hossain", 21);
    Student *karim = new Student("Karim Hosssain", 34);

    // karim = rahim;  //now both obj point the same memory address
    // delete rahim;   //as both are pointing same addrees.if we delete rahim,then karim wont find any address
    // cout << karim->name << " " << karim->roll << endl;  it’s **undefined behavior** Sometimes it might print garbage, sometimes crash.

    // // 1st solution:
    // karim->name = rahim->name;
    // karim->roll = rahim->roll;
    // delete rahim;
    // cout << karim->name << " " << karim->roll << endl;
    // but here is a problem, we have to assign all variable one by one.

    // smart solution:(no need no assign all variables one by one)
    *karim = *rahim; // here we r doing derefrence(*)so that the values are copying.they are not pointing
    delete rahim;    // copies values (using copy assignment), so now they are independent objects. Deleting one won’t affect the other.
    cout << karim->name << " " << karim->roll << endl;
}