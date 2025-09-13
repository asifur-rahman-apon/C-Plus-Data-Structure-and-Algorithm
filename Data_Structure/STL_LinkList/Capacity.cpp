#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> V = {4, 5, 6};
    list<int> s(V.begin(), V.end());
    // s.clear();
    // s.size();
    s.resize(2);
    s.resize(5);
    s.resize(6, 3);

    return 0;
}
