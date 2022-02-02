#include<bits/stdc++.h>

#define int long long
#define INF 1e18
using namespace std;

void solve() {

    int n, BIG = -INF, BIG_COINS = INF, LEFT = INF, RIGHT = -INF, LEFT_COINS = 0, RIGHT_COINS = 0, left, right, coins;

    cin >> n;

    while(n--) {
        cin >> left >> right >> coins;

        if (left < LEFT) {
            LEFT = left;
            LEFT_COINS = coins;
        }

        if (right > RIGHT) {
            RIGHT = right;
            RIGHT_COINS = coins;
        }

        if (left == LEFT)
            LEFT_COINS = min(LEFT_COINS, coins);
        
        if (right == RIGHT)
            RIGHT_COINS =  min(RIGHT_COINS, coins);


        // Segmento más grandes
        if (right-left+1 > BIG) {
            BIG = right-left+1;
            BIG_COINS = coins;
        }

        if (right-left+1 == BIG)
            BIG_COINS = min(BIG_COINS, coins);

        int ans = INF;
        if  (RIGHT-LEFT+1 == BIG)
            ans = BIG_COINS;
        
        ans = min(ans, LEFT_COINS+RIGHT_COINS);
        cout << ans << endl;

    }

}

signed main() {

    size_t t;
    cin >> t;

    while(t--)
        solve();

    return 0;
}