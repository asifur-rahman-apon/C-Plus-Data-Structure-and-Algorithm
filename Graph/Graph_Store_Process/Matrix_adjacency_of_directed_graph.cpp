#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;
    int adj_mat[n][n];

    // for (int i = 0; i < n; i++) // set all value to 0
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         adj_mat[i][j] = 0;
    //     }
    // }
    // shortcut:
    memset(adj_mat, 0, sizeof(adj_mat));

    for (int i = 0; i < n; i++) // set the diagonal to 1
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                adj_mat[i][j] = 1;
            }
        }
    }
    int a, b;
    for (int i = 0; i < e; i++)
    {

        cin >> a >> b;
        adj_mat[a][b] = 1;
    }

    for (int i = 0; i < n; i++) // print
    {
        for (int j = 0; j < n; j++)
        {
            cout << adj_mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
