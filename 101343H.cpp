#include<bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;

    vector<pair<int, int>> arr(n);
    vector<int> ans(n, -1);
    for(int i = 0; i < n; i++) {
        int val; cin >> val;
        arr[i] = {val, i};
    }


    stack<pair<int, int>> S;
    for (int i = 0; i < n; i++) {

        if (S.empty()) {
            S.push(arr[i]);
            continue;
        }

        while (!S.empty() and arr[i].first > S.top().first) {
            ans[S.top().second] = arr[i].first;
            S.pop();
        }

        S.push(arr[i]);

    }
    
    for (int i = 0; i < n; i++)
        cout << ans[i] << " ";
    cout << endl;

    return 0;
}