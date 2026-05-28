#include <bits/stdc++.h>

using namespace std;

/*
Hackerearth pr ek question h jisme kucch relations diye h aur btana h ki variables ke ye relation
feasible h ya nhi,
1 = 2
2 = 3
3 != 5
4 = 5
2 != 5

Isi ko disjoint set ka question bhi bolte h, yaha par {1,2,3} will be treated as variables like
{a,b,c}
 ab iss case m jaha bhi equal sign h unse ek alag connected component bna denge. Aur koi bhi !=
ke sign wale variables same connected component m nhi hone chahiye. Pehle graph create kr lenge uske
baad ek cc array bna lenge jisme save rakhenge ki konsa variable kis connected component m h
1-2-3 {1}
4-5   {2}  aise 2 connected components bn jaayenge

uske baad inequalities confirm kr lenge


*/

void dfs(vector<vector<int>> &g, vector<bool> &vis, int u, int curr_cc,vector<int> &cc){
    vis[u]=true;
    cc[u]=curr_cc;

    for(auto v: g[u]){
        if(!vis[v]){
            dfs(g,vis,v,1-curr_cc,cc);
        }
    }
}

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<vector<int>> g(n+1);
    vector<pair<int,int>> inequalities;

    for (int i = 0; i < k; i++)
    {
        int x, y;
        string op;
        cin >> x >> op >> y;
        if(op=="="){
            g[x].push_back(y);
            g[y].push_back(x);
        }
        else{
            inequalities.push_back({x,y});
        }
    }

    vector<int> cc(n+1);
    int curr_cc=0;

    vector<bool> vis(n+1,false);
    for(int i=1; i<=n; i++){
        if(!vis[i]){
            curr_cc++;
            dfs(g,vis,i,curr_cc,cc);
        }
    }

    bool ans = true;
    for(int i=0; i<inequalities.size(); i++){
        int a=inequalities[i].first, b=inequalities[i].second;
        if(cc[a]==cc[b]){
            ans=false;
            break;
        }
    }

    if(ans){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

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