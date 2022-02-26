#include<bits/stdc++.h>

#define int int64_t

using namespace std;

void solve() {

    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.rbegin(), a.rend());
    int Alice = 0, Bob = 0;

    bool Alice_turn = 1;
    for (int& x : a) {

        if (Alice_turn) {
            if (x % 2 == 0)
                Alice += x;
        } else {
            if (x % 2 == 1)
                Bob += x;
        }

        Alice_turn ^= 1;
    }

    if (Alice > Bob)
        cout << "Alice" << endl;
    else if (Bob > Alice)
        cout << "Bob" << endl;
    else cout << "Tie" << endl;

}

signed main() {

    int t;
    cin >> t;

    while(t--)
        solve();

    return 0;
}