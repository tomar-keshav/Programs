#include <bits/stdc++.h>

using namespace std;

/*
So this is a question on SPOJ in which you have to convert one 4 digit prime number to another 4 digit prime number in minimum steps,
In 1 step you can choose a digit and change it to another digit but the condition is changed number should also be prime

eg for 1033 to 8079
1033->1733->3733->3739->3779->8779->8079 So the answer is 6 steps

https://www.spoj.com/problems/PPATH/

An almost similar problem is also available on leetcode - https://leetcode.com/problems/word-ladder-ii

Another exact similar problem https://leetcode.com/problems/minimum-genetic-mutation/

*/

vector<bool> isprime(100001,1);

void primeSieve(){
    for(int i=2; i<100001; i++){
        if(isprime[i]){
            for(int j=2; j*i<100001; j++){
                isprime[j*i]=false;
            }
        }
    }
}

vector<int> ps;
vector<int> g[100000];

bool isValid(int a, int b){
    int cnt = 0;
    while(a&&b){
        if(a%10!=b%10){
            cnt++;
        }
        a/=10;
        b/=10;
    }
    return (cnt==1);
}

void solve()
{
    int x, y;
    cin>>x>>y;

    vector<int> dist(100000,-1);

    vector<bool> vis(100000,false);

    queue<int> q;
    q.push(x);
    dist[x]=0;
    vis[x]=true;
    while(!q.empty()&&q.front()!=y){
        int u = q.front();
        q.pop();

        for(auto v: g[u]){
            if(!vis[v]){
                vis[v]=true;
                dist[v]=dist[u]+1;
                q.push(v);
            }
        }
    }

    cout<<dist[y]<<endl;
}

int main()
{
    int t;
    cin >> t;
    primeSieve();
    for(int i=1000; i<10000; i++){
        if(isprime[i]){
            ps.push_back(i);
        }
    }

    // for(auto p: ps){
    //     cout<<p<<" ";
    // }

    for(int i=0; i<ps.size(); i++){
        for(int j=i+1; j<ps.size();j++){
            if(isValid(ps[i],ps[j])){
                g[ps[i]].push_back(ps[j]);
                g[ps[j]].push_back(ps[i]);
            }
        }
    }

    while (t--)
    {
        solve();
    }
    return 0;
}