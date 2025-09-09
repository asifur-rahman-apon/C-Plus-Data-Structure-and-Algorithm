#include <bits/stdc++.h>
using namespace std;
int main()
{

    string s("HelloWorld");
    sort(s.begin(), s.end()); // sort by ASCII (ascending)
    cout << s << endl;
    sort(s.begin(), s.end(), greater<char>()); //(descending)
    cout << s << endl;
}