#include <bits/stdc++.h>

#define int int64_t

using namespace std;

void solve() {

    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    vector<int> local_maxs;
    for (int i = 1; i < n-1; i++)
        if (arr[i-1] < arr[i] and arr[i] >  arr[i+1])
            local_maxs.push_back(i);

    int moves = 0;
    for (int i = 0; i < local_maxs.size(); i++) {

        if (i < local_maxs.size()-1 and local_maxs[i+1] - local_maxs[i] == 2) {
            arr[local_maxs[i]+1] = max(arr[local_maxs[i+1]], arr[local_maxs[i]]);
            i++;
        } else {
            arr[local_maxs[i]] = max(arr[local_maxs[i]-1], arr[local_maxs[i]+1]);
        }

        moves++;
    }

    cout << moves << endl;
    for (int v : arr)
        cout << v << " ";
    cout << endl;
}

signed main() {

    int t;
    cin >> t;

    while (t--)
        solve();
    

    return 0;
}