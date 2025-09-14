#include <bits/stdc++.h>
using namespace std;
class myStack
{
public:
    vector<int> v;

    void push(int val)
    {
        v.push_back(val);
    }

    void pop()
    {
        v.pop_back();
    }

    int top()
    {
        return v.back();
    }

    int size()
    {
        return v.size();
    }

    bool empty()
    {
        return v.empty();
    }
};

int main()
{
    myStack s1;
    int x;
    cin >> x;
    for (int i = 0; i < x; i++)
    {
        int val;
        cin >> val;
        s1.push(val);
    }

    // print
    while (!s1.empty())
    {
        cout << s1.top() << endl;
        s1.pop();
    }
    return 0;
}