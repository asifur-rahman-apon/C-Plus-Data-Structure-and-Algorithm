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
    s1.push(10);
    s1.push(20);
    s1.push(30);

    cout << s1.top() << endl;
    cout << s1.size() << endl;

    if (!s1.empty())
    {
        s1.pop();
    }
    if (!s1.empty())
    {
        cout << s1.top() << endl;
    }

    return 0;
}