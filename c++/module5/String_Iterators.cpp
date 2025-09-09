// we use iterator to avoid indexing
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    s = "Apon";
    // for (int i = 0; i < s.size(); i++)
    // {
    //     cout << s[i] << endl;
    // }

    cout << *s.begin() << endl; // pointer to the 1st element of string
    cout << *s.end() << endl;   // pointer to the next element after the last element of string
    cout << *(s.end() - 1) << endl;
    for (string ::iterator it = s.begin(); it < s.end(); it++) // (auto it = s.begin(); it < s.end(); it++)
    {
        cout << *it << endl;
    }
}