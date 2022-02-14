#include<bits/stdc++.h>

using namespace std;

void solve() {

    int count = 0, n, ans = 0;
    string parenthesis;

    cin >> n >> parenthesis;

    for (char c : parenthesis) {
        if (c == '(') count++;
        else {
            count--;
            if (count < 0)
                ans++, count = 0;
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