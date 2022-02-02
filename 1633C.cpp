#include<bits/stdc++.h>

#define int long long int

using namespace std;

void solve() {

    int ch, cd, mh, md, k, w, a, turns_c, turns_m;
    cin >> ch >> cd >> mh >> md >> k >> w >> a;
    bool yes = 0;

    for (int i = 0; i <= k; i++) {
        int health = a*i, damage = w*(k-i);

        turns_c = ceil( (double)mh / (cd + damage) );
        turns_m = ceil( (double)(ch + health) / md);

        if (turns_c <= turns_m) {
            yes = 1;
            break;
        }
    }

    if (yes) cout << "YES" << endl;
    else cout << "NO" << endl;
}

signed main() {

    int t;
    cin >> t;

    while(t--)
        solve();

    return 0;
}