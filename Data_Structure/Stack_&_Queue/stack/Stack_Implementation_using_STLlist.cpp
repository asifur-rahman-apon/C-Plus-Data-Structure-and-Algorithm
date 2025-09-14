#include <bits/stdc++.h>
using namespace std;
class myStack
{
public:
    list<int> l;

    void push(int val)
    {
        l.push_back(val);
    }

    void pop()
    {
        l.pop_back();
    }

    int top()
    {
        return l.back();
    }

    int size()
    {
        return l.size();
    }

    bool empty()
    {
        return l.empty();
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

    while (!s1.empty())
    {
        cout << s1.top() << endl;
        s1.pop();
    }
    return 0;
}