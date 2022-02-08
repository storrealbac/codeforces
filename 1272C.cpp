#include<bits/stdc++.h>

#define int long long

using namespace std;

/* Math O(n)
signed main() {

    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    unordered_set<char> keyboard;
    for (int i = 0; i < k; i++) {
        char val; cin >> val;
        keyboard.insert(val);
    }

    string pressable;
    for (int i = 0; i < n; i++) {
        auto exist = keyboard.find(s[i]);
        if (exist != keyboard.end())
            pressable += '1';
        else pressable += '0';
    }
    pressable += '0';
    int length = 0, ans = 0;

    for (char c : pressable) {
        if (c == '0') {
            ans += (length * (length + 1) ) / 2;
            length = 0;
        } else length++;
    } 
    cout << ans << endl;


    return 0;
}*/

/* dp O(n)*/
signed main() {

    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    unordered_set<char> typeable;
    for (int i = 0; i < k; i++) {
        char val; cin >> val;
        typeable.insert(val);
    }

    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++) {
        auto exist = typeable.find(s[i]);
        if (exist != typeable.end())
            arr[i] = 1;

    }

    vector<int> dp(n+1, 0);
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0)
            dp[i+1] = 0;
        else dp[i+1] = dp[i] + 1;

        ans += dp[i + 1];
    }

    cout << ans << endl;

    return 0;
}