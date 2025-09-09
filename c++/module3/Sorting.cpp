#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int a[n];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n); // ascending

    // sort(starting point, ending point) sorts up to the element before the ending point.
    //  So, we need to increase the ending point by one to include it.
    //  a[0]=a, a[1]=a+1,....

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    sort(a, a + n, greater<int>()); // descending
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}