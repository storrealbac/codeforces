#include<bits/stdc++.h>

#define int long long

using namespace std;

signed main() {

    int N, M;
    string s;

    cin >> N >> M >> s;

    vector<int> edges[N];
    vector<int> degrees(N, 0);
    vector<int> topsort;
    int dp[N];

    for (int i = 0; i < M; i++) {
        int from, to;
        cin >> from >> to;
        from--, to--;

        edges[from].push_back(to);
        degrees[to]++;
    }

    queue<int> q;
    int visited = 0;
    for (int i = 0; i < N; i++) {
        if (degrees[i] == 0) {
            q.push(i);
        }
    }

    while(!q.empty()) {
        visited++;
        int front = q.front();
        q.pop();
        topsort.push_back(front);

        for (int v : edges[front]) {
            degrees[v]--;
            if (degrees[v] == 0)
                q.push(v);
        }
    }

    if (visited < N) {
        cout << -1 << endl;
        return 0;
    }

    int ans = 0;

    for (char c = 'a'; c <= 'z'; c++) {
        memset(dp, 0, sizeof(dp));
    
        for (int x : topsort) {
            if (s[x] == c) ++dp[x];
            for (int y : edges[x])
                dp[y] = max(dp[y], dp[x]);

            ans = max(ans, dp[x]);
        }
    }

    cout << ans << endl;

    return 0;
}