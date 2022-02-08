#include<bits/stdc++.h>

#define int int64_t

using namespace std;

signed main() {

    int n, X = 1, t;
    cin >> n >> t;


    if (n == 1 and t == 10) {
        cout << -1 << endl;
        return 0;
    }

    while (X % t != 0)
        X++;

    string ans = to_string(X);

    while(ans.size() < n)
        ans.push_back('0');
    
    cout << ans << endl;

    return 0;
}