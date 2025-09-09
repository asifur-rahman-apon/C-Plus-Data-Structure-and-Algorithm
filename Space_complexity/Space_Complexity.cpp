#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x; // space complexity O(1)
    int y; // O(1)
    cin >> x;
    int sum = 0;                // O(1)
    int arr1[x];                // O(x)
    int arr[x][y];              // O(x*y)
    for (int i = 0; i < x; i++) // O(1) as the sum variable is fixed,no new variable added.
    {
        sum += i;
    }

    return 0;
}