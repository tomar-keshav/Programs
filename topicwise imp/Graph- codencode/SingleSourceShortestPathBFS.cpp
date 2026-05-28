#include <bits/stdc++.h>

using namespace std;

// In BFS we have to traverse level wise from a node, so we can keep track of all the neighbours of a node and put them in a queue, then we deal with them one by one an put their neighbours in the queue. So that those neighbours will only be dealt with only after the current node neighbours are processed

int main()
{
    int n, edges;
    cin >> n >> edges;

    vector<vector<int>> g(n);
    vector<bool> vis(n, false);

    for (int i = 0; i < edges; i++)
    {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    vector<int> dist(n, 0);
    int curr_dist = 0;

    queue<int> q;
    q.push(0);
    dist[0] = 0;
    while (!q.empty())
    {
        int u = q.front();
        vis[u] = true;

        q.pop();


        for (auto v : g[u])
        {
            if (!vis[v])
            {
                q.push(v);
                dist[v]=dist[u]+1;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << dist[i] << " ";
    }

    return 0;
}