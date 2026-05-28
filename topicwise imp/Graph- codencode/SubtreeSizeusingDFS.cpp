#include <bits/stdc++.h>

#define FOR(a, b, c) for (int a = b; a < c; a++)
#define int long long int
#define pb push_back
#define pp pop_back
#define vi vector<int>
#define all(v) v.begin(), v.end()
#define mod 1000000007

using namespace std;

// dfs for calculating each subtree size, given a root
int dfs(int u, vector<vector<int>> &g, vector<int> &vis, vector<int> &subSize){
    vis[u]=1;

    int count = 1;
    for(auto v: g[u]){
        if(!vis[v]){
            count+=dfs(v,g,vis,subSize);
        }
    }
    subSize[u]=count;

    return count;
}

void solve()
{

    return;
}

int32_t main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}