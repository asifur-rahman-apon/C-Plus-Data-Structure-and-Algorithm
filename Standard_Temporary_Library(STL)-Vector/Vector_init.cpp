#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v;         // 1st way
    vector<int> v1(5);     // 2nd
    vector<int> v2(5, -1); // 3rd
    vector<int> v3(v2);    // 4th
    int arr[5] = {1, 2, 3, 4, 5};
    vector<int> v4(arr, arr + 5); // 5th
    vector<int> v5 = {3, 4, 5};   // 6th

    return 0;
}