#include<bits/stdc++.h>

#define int int64_t

using namespace std;

void solve() {

    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];


    int sum = 0, odd = 0;
    bool possible = 0;


    for (int i = 1; i < n-1; i++) {
        sum += arr[i];

        if (arr[i]&1)
            odd++;

        if (arr[i] >= 2)
            possible = 1;
    }

    if (arr[1]%2 == 1 and n == 3) possible = 0;

    //cerr << possible << endl;
    if (possible) {
        cout << (sum+odd)/2 << endl;
    } else cout << -1 << endl;
}

signed main() {

    int t;
    cin >> t;

    while(t--)
        solve();

    return 0;
}