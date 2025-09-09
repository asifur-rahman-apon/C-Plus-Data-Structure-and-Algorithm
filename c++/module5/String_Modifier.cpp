#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    s = "Apon";
    string s2;
    s2 = "asif";
    s.append(s2);
    cout << s << endl;
    s += s2;
    cout << s << endl;
    s.push_back('f'); // add character in the last of a string
    cout << s << endl;
    s.pop_back(); // remove last character
    cout << s << endl;
    s.assign("asifur");
    cout << s << endl;
    s.erase(2, 4);
    cout << s << endl;
    s.assign("Rahman");
    s.replace(2, 2, "ts"); // start at index 2, replace 2 characters
    cout << s << endl;
    s.insert(6, " Apon");
    cout << s << endl;
}