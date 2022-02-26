#include<bits/stdc++.h>

#define int int64_t

using namespace std;

signed main() {

    int n;
    cin >> n;

    
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());

    int mx = 1;
    int j = 0;
    for (int i = 0; i < n; i++) {
        while (j < n and arr[j]-arr[i] <= 5) {
            ++j;
            mx = max(mx, j-i);
        }
    }

    cout << mx << endl;

    return 0;
}