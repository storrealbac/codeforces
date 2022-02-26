#include <bits/stdc++.h>

#define int int64_t

using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int sum = 0;
    for (int i = 0; i < n; i++)
        sum |= arr[i];
        

    cout << sum << endl;
}

signed main() {

    int t;
    cin >> t;

    while (t--)
        solve();
    

    return 0;
}