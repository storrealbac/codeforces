#include<bits/stdc++.h>

#define int long long

using namespace std;

void dfs(int node, vector<vector<int>> &adjlist, vector<bool> &visited) {
    visited[node] = 1;

    for (int v : adjlist[node])
        if (!visited[v])
            dfs(v, adjlist, visited);
}

signed main() {

    int n, t;
    cin >> n >> t;

    vector<vector<int>> adjlist(n);
    vector<bool> visited(n, false);

    for (int i = 0; i < n-1; i++) {
        int portal;
        cin >> portal;

        adjlist[i].push_back(i+portal);
    }

    dfs(0, adjlist, visited);

    (visited[--t]) ? cout << "YES" : cout << "NO";
    cout << endl;

    return 0;
}
