#include<bits/stdc++.h>

#define int long long

using namespace std;

int dfs(int n, vector<vector<int>> &adjlist, vector<bool> &visited, vector<int> &gold) {

    int mn = gold[n];
    visited[n] = 1;
    
    for (int v : adjlist[n])
        if (!visited[v])
            mn = min(mn, dfs(v, adjlist, visited, gold));

    return mn;
}

signed main() {

    int v, a, cost = 0;

    cin >> v >> a;

    vector<int> gold(v+1);
    vector<vector<int>> friends(v+1);
    vector<bool> visited(v+1, 0);

    for (int i = 0; i < v; i++)
        cin >> gold[i];

    for (int i = 0; i < a; i++) {
        int from, to;
        cin >> from >> to;
        from--, to--;

        friends[from].push_back(to);
        friends[to].push_back(from);
    }

    for (int i = 0; i < v; i++)
        if (!visited[i])
            cost += dfs(i, friends, visited, gold);

    cout << cost << endl;

    return 0;
}