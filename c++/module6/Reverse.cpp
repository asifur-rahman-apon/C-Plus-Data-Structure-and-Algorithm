#include <bits/stdc++.h>
using namespace std;
int main()
{

    string s("HelloWorld");
    reverse(s.begin(), s.end());
    cout << s << endl;

    int n;
    int a[n];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    reverse(a, a + n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }
}