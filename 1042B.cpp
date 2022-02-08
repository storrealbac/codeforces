#include<bits/stdc++.h>

#define int long long 

using namespace std;

signed main() {

    int n;
    cin >> n;

    int dp[n + 1][8];
    const int INF = 1e17;


    for (int i = 0; i <= n; i++)
        for (int j = 0; j < 8; j++)
            dp[i][j] = INF;

    dp[0][0] = 0;
    
    int ans = INF;

    for (int i = 0; i < n; i++) {
        int cost;
        string vitamins;

        cin >> cost >> vitamins;

        int mask = 0;
        for (char c : vitamins)
            mask += (1 << (int)c-'A');
        
        for (int j = 0; j <= 7; j++) {
            dp[i+1][j] = min(dp[i+1][j], dp[i][j]);
            dp[i+1][j | mask] = min(dp[i+1][j|mask], dp[i][j] + cost);
        }


    }
    
    ans = dp[n][7];
    if (ans == INF) ans = -1;
    cout << ans << endl;

    return 0;
}