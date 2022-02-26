#include<bits/stdc++.h>

#define int int64_t

using namespace std;



void solve() {

    int n, k;
    cin >> n >> k;

    int odd = 0;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        if (x & 1) odd++;
    }

    if (odd == 0) {
        cout << "No" << endl;
        return;
    }

    if (odd == n and k % 2 == 0) {
        cout << "No" << endl;
        return;
    }

    if (k == n and odd % 2 == 0) {
        cout << "No" << endl;
        return;
    }

    cout << "Yes" << endl;
}

signed main() {

    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}