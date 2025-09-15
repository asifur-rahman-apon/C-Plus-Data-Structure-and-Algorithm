#include <bits/stdc++.h>
using namespace std;

int main()
{

    list<int> l;

    list<int> L(5);

    list<int> k(5, 8);
    for (int v : k)
    {
        cout << v << " ";
    }

    cout << endl;

    list<int> m(k);
    for (int v : m)
    {
        cout << v << " ";
    }

    cout << endl;

    int a[5] = {1, 2, 3, 4, 5};
    list<int> h(a, a + 5);
    for (int v : h)
    {
        cout << v << " ";
    }

    cout << endl;

    vector<int> V = {4, 5, 6};
    list<int> s(V.begin(), V.end());
    for (int v : V)
    {
        cout << v << " ";
    }

    // // print list
    // for (auto it = k.begin(); it != k.end(); it++)
    // {
    //     cout << *it << " ";
    // }

    return 0;
}
