#include<bits/stdc++.h>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    vector<pair<int, int>> ram(n);
    for (int i = 0; i < n; i++)
        cin >> ram[i].first;
    
    for (int i = 0; i < n; i++)
        cin >> ram[i].second;

    sort(ram.begin(), ram.end());

    int ans = k;
    for (int i = 0; i < n; i++) {
        //cout << ans << " -> " << ram[i].first << " , " << ram[i].second << endl;
        if (ans >= ram[i].first)
            ans += ram[i].second;
        else break;
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