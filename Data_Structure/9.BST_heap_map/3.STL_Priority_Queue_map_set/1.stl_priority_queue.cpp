#include <bits/stdc++.h>
using namespace std;

int main()
{

    priority_queue<int> pr;                             // max
    priority_queue<int, vector<int>, greater<int>> pr1; // min

    pr.push(10);
    pr.push(30);
    pr.push(50);
    pr.push(70);

    pr1.push(10);
    pr1.push(30);
    pr1.push(50);
    pr1.push(70);

    cout << "pr=" << pr.top() << endl;
    cout << "pr1=" << pr1.top() << endl;

    pr.pop();
    pr1.pop();

    cout << "pr=" << pr.top() << endl;
    cout << "pr1=" << pr1.top() << endl;

    return 0;
}