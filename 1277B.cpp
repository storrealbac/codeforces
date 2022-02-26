#include <bits/stdc++.h>

#define int int64_t

using namespace std;

void solve() {
    int n;
    cin >> n;

    set<int> S;
    for (int i = 0; i < n; i++) {
        int val; cin >> val;
        S.insert(val);
    }

    int moves = 0;
    while(!S.empty()) {
        int mx = *S.rbegin();
        S.erase(mx);

        if (mx % 2 == 0) {
            moves++;
            S.insert(mx/2);
        }
    }

    cout << moves << endl;
}

signed main() {

    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}