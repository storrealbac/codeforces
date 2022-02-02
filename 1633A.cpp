#include<bits/stdc++.h>

using namespace std;

int diffs(int a, int b) {
 
    int ans = 0;
    if ( a % 10 != b % 10) ++ans;
    a /= 10, b /= 10;
 
    if ( a % 10 != b % 10) ++ans;
    a /= 10, b /= 10;
 
    if ( a % 10 != b % 10) ++ans;
    a /= 10, b /= 10;
 
    if ( a % 10 != b % 10) ++ans;
    a /= 10, b /= 10;
 
    return ans;
}

void solve() {

    int n;
    cin >> n;

    int similar = 5, ans = 0, large = to_string(n).length();
    for (int i = 0; i <= 999; i += 7) {
        if ( diffs(n, i) < similar and to_string(i).length() == large) {
            ans = i;
            similar = diffs(n, i);
        } 
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