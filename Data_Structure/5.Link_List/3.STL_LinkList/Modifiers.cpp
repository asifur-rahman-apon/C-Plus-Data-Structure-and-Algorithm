#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> m = {45, 6, 7, 89};
    list<int> l = {1, 2, 3, 4, 5};

    list<int> k;
    // k=l; //assign 1
    k.assign(l.begin(), l.end()); // assign 2

    // k.push_back(100);
    // k.push_front(10);

    // k.pop_back();
    // k.pop_front();

    // list dont have index like vector( v[i]) so,find out indx like this.

    cout << *next(k.begin(), 2) << endl; // k.begin is head and 2 is indx

    k.insert(next(k.begin(), 2), 100);
    k.insert(next(k.begin(), 2), m.begin(), m.end());

    k.erase(next(k.begin(), 2));
    k.erase(next(k.begin(), 2), next(k.begin(), 4));

    replace(k.begin(), k.end(), 40, 60);

    auto it = find(k.begin(), k.end(), 200);
    if (it == k.end())
    {
        cout << "not found" << endl;
    }
    else
    {
        cout << "found" << endl;
    }

    return 0;
}