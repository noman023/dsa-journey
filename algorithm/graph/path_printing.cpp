#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[5];
bool visited[5];
int level[5];
int parent_track[5];

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    visited[src] = true;
    level[src] = 0;

    while (!q.empty())
    {
        int parent = q.front();
        q.pop();

        for (int child : adj_list[parent])
        {
            if (!visited[child])
            {
                q.push(child);
                visited[child] = true;
                level[child] = level[parent] + 1;
                parent_track[child] = parent;
            }
        }
    }
}

int main()
{
    int v, e;
    cin >> v >> e;

    while (e--)
    {
        int a, b;
        cin >> a >> b;

        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    memset(visited, false, sizeof(visited));
    memset(level, -1, sizeof(level));
    memset(parent_track, -1, sizeof(parent_track));

    int src, dest;
    cin >> src >> dest;

    bfs(src);

    // after bfs we can print whole path of dest to src or vise versa(by reversing parent track)
    int node = dest;
    while (node != -1)
    {
        cout << node << " ";
        node = parent_track[node];
    }

    return 0;
}