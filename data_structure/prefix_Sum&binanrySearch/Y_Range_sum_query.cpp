// prefix sum;

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q, l, r, sum;
    cin >> n >> q;
    vector<long long int> v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    vector<long long int> presum(n + 1);
    presum[1] = v[1];
    for (int i = 2; i <= n; i++)
    {
        presum[i] = presum[i - 1] + v[i];
    }

    while (q--)
    {
        cin >> l >> r;
        long long int sum = 0;
        if (l == 1)
        {
            sum = presum[r];
        }
        else
        {
            sum = presum[r] - presum[l - 1];
        }
        cout << sum << endl;
    }

    return 0;
}
