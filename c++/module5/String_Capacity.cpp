#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    s = "Apon Asif";
    cout << s.size() << endl;
    s.resize(4);
    cout << s << endl;
    s.resize(15, 'x');
    cout << s << endl;
}