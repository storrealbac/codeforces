#include<bits/stdc++.h>

#define int long long

using namespace std;

signed main() {

    int n, k;
    cin >> n >> k;

    vector<int> theorems(n), sleep(n);

    for (int i = 0; i < n; i++)
        cin >> theorems[i];
    
    for (int i = 0; i < n; i++)
        cin >> sleep[i];

    vector<int> p(n);
    p[0] = theorems[0] * sleep[0];

    for (int i = 1; i < n; i++)
        p[i] = theorems[i] * sleep[i] + p[i-1];

    vector<int> s(n);
    int r = 0;
    for (int i = n-1; i >= 0; i--) {
        r += theorems[i] * sleep[i];
        s[i] = r;
    }

    vector<int> prefix(n);
    prefix[0] = theorems[0];
    for (int i = 1; i < n; i++)
        prefix[i] = prefix[i-1] + theorems[i];

    int ans = 0;
    for (int i = 0; i + k - 1 < n; i++) {
        int cur = 0;

        if (i > 0) cur += p[i-1];
        if (i + k < n) cur += s[i+k];

        int range_sum = prefix[i + k - 1];
        if (i > 0) range_sum -= prefix[i-1];
        cur += range_sum;

        ans = max(ans, cur);
    }

    cout << ans << endl;

    return 0;
}