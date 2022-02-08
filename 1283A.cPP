#include<bits/stdc++.h>

#define int64_t

using namespace std;

void solve() {

    int h, m, total = 24*60;
    cin >> h >> m;

    cout << total-(h*60)-m << endl;
}

signed main() {

    int t;
    cin >> t;

    while(t--)
        solve();

    return 0;
}