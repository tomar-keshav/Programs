#include <bits/stdc++.h>

using namespace std;

/*
 By definition Articulation points also know as cut vertex are the nodes which when removed increses
 the number of components in a graph

 By observation,
 1. the endpoints of a bridge are always articulation points whoever among them has a degree of not
 less than 2
 2. Articulation points are not necessary to be endpoints of bridges


 The criteria to check the articulation points in a graph is similar to finding the bridges in a graph
 but this time, a node is the articulation point if the childs lowtime is less than or equal to nodes intime (previously it was just less than)

 note that, a node's child having lowtime less than intime of the node indicates that the child is
 also connected to one of the ancestor, and if the lowtime is equal than it indicates that the child is connected to the node itself


 but the above case is not true for a node to be the root node, for the root node we have to check if
 it have more than 1 subtrees, it is an articulation point
*/

int n;
vector<vector<int>> graph;
vector<bool> vis;
vector<int> tin, low; // intime and lowtime
int timer;

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
        if (vis[v])
        {
            low[u] = min(low[u], tin[v]);
        }
        else
        {
            dfs(v, u);
            if (tin[u] <= low[v] && parent != -1)
            {
                cout << u << " is an articulation point" << endl;
            }
            low[u]=min(low[u],low[v]);
            children++;
        }
    }
    if (parent == -1 && children > 1)
    {
        cout << u << " is an articulation point" << endl;
    }
}

int main()
{
    int m;
    cin >> n >> m;
    graph.resize(n + 1);
    tin.resize(n + 1);
    low.resize(n + 1);
    vis.resize(n + 1);
    timer = 1;
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }

    for (int i = 1; i <= n; i++)
    {
        // the graph may be disconnected
        if (!vis[i])
        {
            dfs(i, -1);
        }
    }

    return 0;
}