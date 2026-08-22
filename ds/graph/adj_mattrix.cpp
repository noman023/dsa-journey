#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;

    int adj_mattrix[n][n];
    memset(adj_mattrix, 0, sizeof(adj_mattrix));

    for (int i = 0; i < n; i++) // diagonal values to 1
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                adj_mattrix[i][j] = 1;
            }
        }
    }

    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;

        adj_mattrix[a][b] = 1;
        adj_mattrix[b][a] = 1; // for undirected graph
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << adj_mattrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}