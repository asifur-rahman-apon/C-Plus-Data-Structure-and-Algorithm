#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;                       // complexity order of n= O(1)
    cin >> n;                    // complexity O(1)
    for (int i = 1; i <= n; i++) // O(n)
    {
        cout << i << " ";
    }
    for (int i = 1; i <= n; i += 2) // O(n/2).. removing constant  O(n)
    {
        cout << i << " ";
    }
    return 0; // O(1)
    // total- O(n+n+1+1+1)= O(2n) =O(n)
}