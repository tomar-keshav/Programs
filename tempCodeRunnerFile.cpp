#include <bits/stdc++.h>

#define FOR(a, b, c) for (int a = b; a < c; a++)
#define int long long int
#define pb push_back
#define pp pop_back
#define vi vector<int>
#define all(v) v.begin(), v.end()
#define mod 1000000007

using namespace std;

int leftmost_a(string st)
{
    for (int i = 0; i < st.size(); i++)
    {
        if (st[i] == 'a')
        {
            return i;
        }
    }
    return -1;
}

int leftmost_b(string st)
{
    for (int i = 0; i < st.size(); i++)
    {
        if (st[i] == 'b')
        {
            return i;
        }
    }
    return -1;
}

int rightmost_a(string st)
{
    for (int i = st.size() - 1; i >= 0; i--)
    {
        if (st[i] == 'a')
        {
            return i;
        }
    }
    return -1;
}

int rightmost_b(string st)
{
    for (int i = st.size() - 1; i >= 0; i--)
    {
        if (st[i] == 'b')
        {
            return i;
        }
    }
    return -1;
}

void solve()
{
    int n;
    cin >> n;
    string st;
    cin >> st;

    // bubbling out a
    int la = leftmost_a(st);
    int lb = leftmost_b(st);
    int ra = rightmost_a(st);
    int rb = rightmost_b(st);
    // cout<<la<<" "<<lb<<" "<<ra<<" "<<rb<<endl;

    int ans_a = 0;
    for (int i = 0; i < n; i++)
    {
        if(lb==-1){
            break;
        }
        if (st[i] == 'a')
        {
            ans_a += min(max(i - lb,(int)0), max(rb - i,(int)0));
        }
    }
    // cout<<"ans a is "<<ans_a<<endl;
    int ans_b=0;
    for (int i = 0; i < n; i++)
    {
        if(la==-1){
            break;
        }
        if (st[i] == 'b')
        {
            ans_b += min(max(i - la,(int)0), max(ra - i,(int)0));
        }
    }
// cout<<"ans b is "<<ans_b<<endl;
    cout<<min(ans_a,ans_b)<<endl;
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