#include <bits/stdc++.h>
using namespace std;

int main()
{

    list<int> l = {40, 70, 30, 30, 40, 70};
    l.remove(40);
    l.sort();
    l.sort(greater<int>());
    l.unique(); // only works when list is sorted
    l.reverse();

    return 0;
}