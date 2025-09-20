// go through level wise

#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[1005]; // we made this global so that this can be acccessed from funnc bfs;
bool vis[1005];
void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    while (!q.empty())
    {
        // ber kore ana
        int par = q.front();
        q.pop();

        // oi node niye kaj
        cout << par << " ";

        // children gulo push kora
        for (int child : adj_list[par])
        {
            if (vis[child] == false)
            {
                q.push(child);
                vis[child] = true;
            }
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(a);
        adj_list[b].push_back(b);
    }
    memset(vis, false, sizeof(vis));
    bfs(0);
    return 0;
}