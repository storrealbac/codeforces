#include<bits/stdc++.h>

#define int long long

using namespace std;

signed main() {

    int n, m;
    cin >> n >> m;

    vector<int> adjlist[n];
    vector<int> ans(n);
    for (int i = 0; i < m; i++) {
        int k;
        cin >> k;

        vector<int> group(k);
        for (int j = 0; j < k; j++)
            cin >> group[j];

        for (int j = 1; j < k; j++) {
            int from = group[j], to = group[j-1];
            to--, from--;
            adjlist[from].push_back(to);
            adjlist[to].push_back(from);
        }

    }


    unordered_set<int> visited;    
    for (int i = 0; i < n; i++) {

        auto is_visited = visited.find(i);
        if (is_visited != visited.end())
            continue;

        queue<int> q;
        q.push(i);
        vector<int> group;

        while(!q.empty()) {
            int p = q.front();
            q.pop();
            for (int v : adjlist[p]) {
                auto find = visited.find(v);
                if (find == visited.end())
                    q.push(v), visited.insert(v), group.push_back(v);
            }
        }

        for (int v : group)
            ans[v] = group.size();
        
    }

    for (int i : ans) {
        int x = i;
        if (i == 0)
            x = 1;
        cout << x << " ";
    }

    cout << endl;

    return 0;
}