#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    map<string, int> mp;

    while (ss >> word) // O(NlogN)
    {
        mp[word]++; // O(logN)
    }
    for (auto it = mp.begin(); it != mp.end(); it++) // O(NlogN)
    {
        cout << it->first << " " << it->second << endl; // O(logN)
    }

    return 0;
}
