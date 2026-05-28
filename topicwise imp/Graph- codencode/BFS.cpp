#include <bits/stdc++.h>

using namespace std;

/*
A problem available on hackerearth, where a monk wants to find the shortest path travelled from 1 to N, and the graph can be cyclic (that's why only BFS will work, as the graph is cyclic)

Practice problem - https://www.hackerearth.com/practice/algorithms/graphs/breadth-first-search/practice-problems/algorithm/monk-and-the-islands/
*/

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> g(n + 1);

    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }

    vector<bool> vis(n + 1, false);
    vector<int> dist(n + 1, 0);

    queue<int> q;
    q.push(1);
    vis[1] = true;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (auto v : g[u])
        {
            if (!vis[v])
            {
                vis[v] = true;
                q.push(v);
                dist[v] = dist[u] + 1;
            }
        }
    }

    cout << dist[n] << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}