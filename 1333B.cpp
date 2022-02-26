#include<bits/stdc++.h>

#define int int64_t

using namespace std;

void solve() {

    int n;
    cin >> n;

    vector<int> a(n), b(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
        cin >> b[i];

    bool possible = 1;
    int first_neg = -1, first_pos = -1;
    for (int i = 0; i < n; i++) {
        if (first_neg != -1 and first_pos != -1)
            break;

        if (a[i] == -1 and first_neg == -1)
            first_neg = i;

        if (a[i] == 1 and first_pos == -1)
            first_pos = i;
    }

    if (a[0] != b[0])
        possible = 0;

    for (int i = 1; i < n and possible; i++) {
        if (b[i] < a[i] and (first_neg >= i or first_neg == -1) ) {
            possible = 0;
            break;
        }

        if (b[i] > a[i] and (first_pos >= i or first_pos == -1) ) {
            possible = 0;
            break;
        }
    }

    //cerr << "First pos -> " << first_pos << " " << "Second pos ->" << first_neg << " " << endl;
    if (possible) cout << "YES" << endl;
    else cout << "NO" << endl;
    //cerr << endl << endl;

}

signed main() {

    int t;
    cin >> t;

    while(t--)
        solve();

    return 0;
}