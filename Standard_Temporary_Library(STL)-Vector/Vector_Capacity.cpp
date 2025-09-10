#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {8, 2, 5, 4, 3};
    // v.resize(2); // output {8,2}
    // v.resize(6); // output {8,2,5,4,3,0}
    // v.resize(3, 5); // output {8,2,5}
    v.resize(7, 6); // output 8 2 5 4 3 6 6
    for (int x : v)
    {
        cout << x << " ";
    }

    return 0;
}