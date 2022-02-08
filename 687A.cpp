#include<bits/stdc++.h>

#define int long long

using namespace std;

bool possible = 1;

unordered_set<int> A, B;

void dfs(int n, bool color, vector<vector<int>> &edges, vector<bool> &visited, vector<bool> &colors) {

    if (visited[n]) return;

    visited[n] = 1;
    colors[n] = color;

    if (color) A.insert(n);
    else B.insert(n);

    for (int v : edges[n]) {
        if (visited[v] and colors[v] == color) {
            possible = 0;
            return;
        } else dfs(v, color ^ 1, edges, visited, colors);

    }

}

signed main() {

    int v, a;
    cin >> v >> a;

    vector<vector<int>> edges(v);
    vector<bool> visited(v, 0), colors(v, 0);

    for (int i = 0; i < a; i++) {
        int from, to;
        cin >> from >> to;

        from--, to--;
        edges[from].push_back(to);
        edges[to].push_back(from);
    }

    for (int i = 0; i < v; i++) {
        if (!visited[i])
            dfs(i, 0, edges, visited, colors);
    }

    if (possible) {
        cout << A.size() << endl;
        for (int v : A)
            cout << v+1 << " ";
        cout << endl;
    
        cout << B.size() << endl;
        for (int v : B)
            cout << v+1 << " ";
        cout << endl;

    } else cout << -1 << endl;

    return 0;
}