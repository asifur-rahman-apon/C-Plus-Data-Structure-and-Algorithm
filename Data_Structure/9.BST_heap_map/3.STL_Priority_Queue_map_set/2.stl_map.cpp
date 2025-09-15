#include <bits/stdc++.h>
using namespace std;

int main()
{

    map<string, int> mp;
    mp["apon"] = 30;
    mp["mehu"] = 500; // O(logN)
    mp["meh"] = 70;

    cout << mp["apon"] << endl;
    cout << mp["rahman"] << endl;
    for (auto it = mp.begin(); it != mp.end(); it++) // O(NlogN)
    {
        cout << it->first << " " << it->second << endl; // O(logN)
    }

    if (mp.count("asif"))
    {
        cout << "ache" << endl;
    }
    else
    {
        cout << "nai" << endl;
    }

    return 0;
}
