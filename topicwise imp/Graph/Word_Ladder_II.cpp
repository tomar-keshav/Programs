#include <bits/stdc++.h>

using namespace std;

bool isValid(string &a, string &b)
{
    int cnt = 0;

    if (a.size() != b.size())
    {
        return false;
    }

    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] != b[i])
        {
            cnt++;
        }
        if (cnt > 1)
        {
            return false;
        }
    }
    return true;
}

int bfs(int x, int y, vector<vector<int>> &g)
{
    vector<int> dist(g.size());
    vector<bool> vis(g.size(), false);

    queue<int> q;
    q.push(x);
    dist[x] = 0;
    vis[x] = true;

    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        for (auto v : g[u])
        {
            if (!vis[v])
            {
                vis[v] = true;
                dist[v] = dist[u] + 1;
                q.push(v);
            }
        }
    }
    return dist[y];
}

vector<vector<string>> findLadders(string beginWord, string endWord, vector<string> &wordList)
{
    map<string, int> mp;
    wordList.push_back(beginWord);
    wordList.push_back(endWord);

    int n = wordList.size();

    for (int i = 0; i < n; i++)
    {
        mp[wordList[i]] = i;
    }
    vector<vector<int>> g(n);

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (isValid(wordList[i], wordList[j]))
            {
                g[mp[wordList[i]]].push_back(mp[wordList[j]]);
                g[mp[wordList[j]]].push_back(mp[wordList[i]]);
            }
        }
    }

    int k = bfs(mp[beginWord],mp[endWord], g);

    int x = mp[beginWord];
    int y = mp[endWord];

    vector<vector<string>> ans;

    vector<int> dist(g.size());
    vector<bool> vis(g.size(), false);

    queue<int> q;
    q.push(x);
    dist[x] = 0;
    vis[x] = true;

    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        for (auto v : g[u])
        {
            if (!vis[v])
            {
                vis[v] = true;
                dist[v] = dist[u] + 1;
                q.push(v);
            }
        }
    }
    
}

int main()
{
    int n;
    cin >> n;
    string startword, endword;
    cin >> startword >> endword;

    vector<string> wordList(n);
    for (int i = 0; i < n; i++)
    {
        cin >> wordList[i];
    }

    vector<vector<string>> ans = findLadders(startword, endword, wordList);

    for (auto vc : ans)
    {
        for (auto st : vc)
        {
            cout << st << " ";
        }
        cout << endl;
    }

    return 0;
}