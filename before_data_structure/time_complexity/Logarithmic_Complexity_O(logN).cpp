#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int k = 2;
    cin >> n;
    for (int i = 1; i <= n; i *= 2) // O(logn)
    {
        cout << i << endl;
    }
    // easy way to identify logarithmatic complexity that in incerement there will be multiple or division sign.
    // exception:
    for (int i = 1; i <= n; i++) // O(logn)
    {
        cout << i << endl;
        i = i * k;
    }
    return 0;
}