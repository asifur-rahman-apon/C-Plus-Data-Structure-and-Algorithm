#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {4, 2, 3, 9, 2, 3, 1};
    vector<int> v2 = {100, 200, 300};
    // v2 = v; //assign
    
    // v.push_back(9);
    
    // v.pop_back();
   
    // v.insert(v.begin() + 2, 5);
    // v.insert(v.begin() + 2, v2.begin(), v2.end());
    
    // v.erase(v.begin() + 2);
    // v.erase(v.begin() + 1, v.begin() + 3);
   
    // replace(v.begin(), v.end()-1, 2, 100);
   
    // vector<int>::iterator it = find(v.begin(), v.end(), 1);
    // cout<<*it<<endl; // output 1. the value we r searching for.
    // if (it == v.end())
    // {
    //     cout << "not found";
    // }
    // else
    // {
    //     cout << "found";
    // }

    for (int x : v)
    {
        cout << x << " ";
    }
    return 0;
}