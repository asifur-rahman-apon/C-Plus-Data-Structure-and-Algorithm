#include <bits/stdc++.h>
using namespace std;

int main()
{

    stack<int> s1;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int val;
        cin >> val;
        s1.push(val);
    }

    while (!s1.empty())
    {
        cout << s1.top() << endl;
        s1.pop();
    }

    return 0;
}