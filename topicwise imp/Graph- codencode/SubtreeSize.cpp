#include <bits/stdc++.h>

using namespace std;

// this is the way to store the subtree size for each node in a graph using dfs
/*
This algorithm is very useful when we want to find the number of nodes across a bridge at the same time of finding the bridges

// see the submission of https://codeforces.com/contest/1986/my
*/

void dfs(int u){
    subtreeSize[u]=1;
    vis[u]=true;

    for(auto v: u){
        dfs(v);
        // assume that subtreeSize of v will be filled
        subtreeSize[u]+=subtreeSize[v];
    }
}

int main(){
    
    return 0;
}