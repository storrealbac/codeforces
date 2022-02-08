#include<bits/stdc++.h>

using namespace std;

set<string> ans;

void backtrack(string S, int i, bool change) {

    if (i < 0) return;

    if (change)
        S[i] = '1';

    ans.insert(S);
    
    backtrack(S, i-1, 1);
    backtrack(S, i-1, 0);
}

void solve() {

    int n;
    cin >> n;

    string initial;
    ans.clear();

    for (int i = 0; i < n; i++)
        initial += '0';

    backtrack(initial, n-1, 1);
    backtrack(initial, n-1, 0);    

    for (string x : ans)
        cout << x << endl;
}

int main() {

    int t;
    cin >> t;

    while(t--)
        solve();

    return 0;
}