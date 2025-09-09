#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= sqrt(n); i++) // O(sqrtN)
    {
        cout << i << endl;
    }

    // find out the divisors of 36
    for (int i = 1; i <= n; i++) // O(n)

    {
        if (n % i == 0)
        {
            cout << i << endl;
        }
    }

    // here is the optimization
    for (int i = 1; i <= sqrt(n); i++) // O(sqrtN)

    {
        if (n % i == 0)
        {
            cout << i << " " << n / i << endl;
        }
    }
    // another :
    // for (int i = 1; i *i <= n; i++) // O(sqrtN)
}
