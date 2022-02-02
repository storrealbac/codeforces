#include<bits/stdc++.h>

using namespace std;

void solve() {

    string s;
    cin >> s;

    if (s.size() == 1 or s.size() == 2) {
        cout << 0 << endl;
        return;
    }

    int a = 0, b = 0, ans = 0;
    for (char c : s) {
        if (c == '0') ++a;
        if (c == '1') ++b;
    
        if (a > b or b > a) ans = max(ans, min(a, b));
    }

    cout << ans << endl;

}

int main() {

    int t;
    cin >> t;

    while(t--)
        solve();

    return 0;
}