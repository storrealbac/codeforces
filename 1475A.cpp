#include<bits/stdc++.h>

#define int long long

using namespace std;

void solve() {
    int n;
    cin >> n;

    while (n > 1) {
        if (n & 1) {
            cout << "YES" << endl;
            return;
        }           
        n >>= 1;
    }

    cout << "NO" << endl;
    
}

signed main() {

    int t;
    cin >> t;

    while(t--)
        solve();

    return 0;
}