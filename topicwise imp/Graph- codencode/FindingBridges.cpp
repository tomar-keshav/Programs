#include <bits/stdc++.h>

using namespace std;

// Finding bridges is an important aspect of graph

/*
A bridge by definition is an edge which when removed increases the number of connected
components in a graph

To understand this we have to understand forward edge and back edge in a graph

A back edge in a graph is an edge which connects a node in a graph to already visited node (the visited node should not be the parent of the node)
when we traverse using DFS, all other nodes are the forward edges

eg-> in graph 1->2->3->4->2 , 1->2 is a bridge
For finding the bridge we use the concept of in time and low time in a graph

In the in-time array we store the in time of a node as usual

Because a back edge can't be a bridge that's why we take help of low time,
initially in each dfs entry store the low time as the updated timer, similar to intime
than whenever we found a already visited node i.e. not the parent of current node, we update
the low-time as the minimum of low time of the current node and the intime of the parent
(the minimum check is necessary because when it will track back to the parent, the parent's low time will not change)

if the child node is not visited we will dfs on the child and after dfs will return also
update the low time of current node as the minimum of low time of current and low time of
child

** Finding bridge, In the end an edge whose in time is less then low time of its child is
a bridge

problem statement - https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=737

*/

vector<int> g[1000];  
int vis[1000], intime[1000], lowtime[1000];
int timer;      

void dfs(int u, int parent) {
    vis[u] = true;
    intime[u] = lowtime[u] = timer;
    timer++;

    for (auto v : g[u]) {
        if (v == parent) {   // Skip the edge to the parent
            continue;
        }

        if (vis[v]) {
            // Update low-link value for back edge
            lowtime[u] = min(lowtime[u], intime[v]);
        } else {
            dfs(v, u);
            // Check if the edge (u, v) is a bridge
            if (lowtime[v] > intime[u]) {
                cout << u << " - " << v << " is a bridge" << endl;
            }
            // Update low-link value based on the child
            lowtime[u] = min(lowtime[u], lowtime[v]);
        }
    }
}

int main() {
    int n, m;  // Number of nodes and edges
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u); 
    }

    memset(vis, 0, sizeof(vis));
    timer = 0;

    // Run DFS for all connected components
    for (int i = 0; i < n; i++) {
        if (!vis[i]) {
            dfs(i, -1);
        }
    }

    return 0;
}