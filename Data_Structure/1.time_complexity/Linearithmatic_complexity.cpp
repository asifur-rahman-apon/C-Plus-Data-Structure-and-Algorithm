#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) // 0(n)
    {
        for (int j = 1; j <= m; j *= 2) // O(logm)
        {
            cout << "Hello" << endl;
        }
    }
    // total= O(nlogm)
    return 0;
}