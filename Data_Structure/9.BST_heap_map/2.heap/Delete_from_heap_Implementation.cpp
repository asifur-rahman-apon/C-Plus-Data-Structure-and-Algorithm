#include <bits/stdc++.h>
using namespace std;

void insert_heap(vector<int> &v, int val)
{
    v.push_back(val);
    int cur_idx = v.size() - 1;
    while (cur_idx != 0)
    {
        int par_idx = (cur_idx - 1) / 2;
        if (v[par_idx] < v[cur_idx])
        {
            swap(v[par_idx], v[cur_idx]);
        }
        else
        {
            break;
        }
        cur_idx = par_idx;
    }
}
void print_heap(vector<int> v)
{
    for (int x : v)
    {
        cout << x << " ";
    }
    cout << endl;
}

void delete_heap(vector<int> &v)
{
    if (v.empty())
        return; // nothing to delete

    v[0] = v.back();
    v.pop_back();

    int cur_idx = 0;
    int n = v.size();

    while (true)
    {
        int left_idx = 2 * cur_idx + 1;
        int right_idx = 2 * cur_idx + 2;
        int largest = cur_idx;

        if (left_idx < n && v[left_idx] > v[largest])
            largest = left_idx;
        if (right_idx < n && v[right_idx] > v[largest])
            largest = right_idx;

        if (largest != cur_idx)
        {
            swap(v[cur_idx], v[largest]);
            cur_idx = largest;
        }
        else
        {
            break; // heap property restored
        }
    }
}

int main()
{
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        insert_heap(v, val);
    }

    delete_heap(v);
    print_heap(v);
    return 0;
}