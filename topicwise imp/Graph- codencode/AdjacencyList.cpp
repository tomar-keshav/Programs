#include <bits/stdc++.h>

using namespace std;

void takeInput(){
    int n,m;
    cin>>n;
    cin>>m;
    vector<int> ar[n+1];

    while(m--){
        int a, b;
        cin>>a>>b;
        ar[a].push_back(b);
        ar[b].push_back(a);
    }
    return;
}

int main(){
    
    return 0;
}