#include<bits/stdc++.h>

#define int long long
#define INF 1e17

using namespace std;

signed main() {

    int n, k, p;
    cin >> n >> k >> p;

    vector<int> people(n), keys(k);
    for (int i = 0; i < n; i++)
        cin >> people[i];
    
    for (int i = 0; i < k; i++)
        cin >> keys[i];

    sort(people.begin(), people.end());
    sort(keys.begin(), keys.end());
    
    int dp[k+1][n+1]; 
    for (int i = 0; i <= k; i++)
        for (int j = 0; j <= n; j++)
            dp[i][j] = INF;

    dp[0][0] = 0;
    for (int i = 0; i < k; i++) {
        for (int j = 0; j <= n; j++) {
            int cost = abs(people[j]-keys[i]) + abs(keys[i]-p);
            // dont take
            dp[i+1][j] = min(dp[i+1][j], dp[i][j]);

            // take
            if (j < n)
                dp[i+1][j+1] = min(dp[i+1][j+1], max(dp[i][j], cost) );
        }
    }

    cout << dp[k][n] << endl;
    return 0;
}