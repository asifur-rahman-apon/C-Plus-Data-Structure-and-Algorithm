#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a = 100;
    int b = 500;
    cout << min(4, 8) << endl;
    cout << max({56, 78, 90, 123, 300}) << endl;
    swap(a, b);
    cout << a << " " << b << endl;
    return 0;
}