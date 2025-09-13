#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) // O(n)
    {
        for (int j = 0; j <= m; j++) // O(m)
        {
            cout << "Hello" << endl;
        }
    }
    // total(N*M) nested so we multiply.
    return 0;
}