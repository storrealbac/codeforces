#include<bits/stdc++.h>

using namespace std; 

void solve() {

    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    if (is_sorted(arr.begin(), arr.end()))
        cout << "NO" << endl;
    else cout << "YES" << endl;
}

int main() {

    int t;
    cin >> t;

    while(t--)
        solve();

    return 0;
}