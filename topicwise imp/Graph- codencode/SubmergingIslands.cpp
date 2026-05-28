#include <bits/stdc++.h>

#define FOR(a, b, c) for (int a = b; a < c; a++)
#define int long long int
#define pb push_back
#define pp pop_back
#define vi vector<int>
#define all(v) v.begin(), v.end()
#define mod 1000000007

using namespace std;

vector<vector<int>> graph;
vector<bool> vis;
vector<int> tin, low;
int timer;
set<int> ans;

void dfs(int u, int parent)
{
    vis[u] = true;
    tin[u] = low[u] = timer;
    timer++;
    int children = 0;
    for (auto v : graph[u])
    {
        if (v == parent)
        {
            continue;
        }
        if (!vis[v])
        {
            dfs(v, u);
            if (tin[u] <= low[v] && parent != -1)
            {
                ans.insert(u);
            }
            low[u] = min(low[u], low[v]);
        }
        else
        {
            low[u] = min(low[u], tin[v]);
        }
    }

    if (children > 1 && parent == -1)
    {
        ans.insert(u);
    }
}

void solve()
{
    while (true)
    {
        int n, m;
        cin >> n >> m;
        if (n == 0 && m == 0)
        {
            break;
        }

        graph.resize(n + 1);
        vis.resize(n + 1);
        tin.resize(n + 1);
        low.resize(n + 1);
        timer = 0;
        for (int i = 1; i <= n; i++)
        {
            graph[i].clear();
            vis[i] = false;
            tin[i] = low[i] = 0;
            ans.clear();
        }
        for (int i = 0; i < m; i++)
        {
            int u, v;
            cin >> u >> v;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }

        dfs(1, -1);
        cout << ans.size() << endl;
    }
    return;
}

int32_t main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}