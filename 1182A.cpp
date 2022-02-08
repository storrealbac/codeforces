#include<bits/stdc++.h>

using namespace std;

/* dp O(n)
int main() {

    int n;
    cin >> n;

    vector<int> dp(70, 0);
    dp[2] = 2;

    for (int i = 4; i <= n; i += 2)
        dp[i] = dp[i - 2]*2;
    
    cout << dp[n] << endl;

    return 0;
}
*/

int main() {

    // Bitwise O(1)

    int n;
    cin >> n ;

    if (n % 2 == 1) {
        cout << 0 << endl;
        return 0;
    }

    cout << (1<<(n/2)) << endl;

    return 0;
}