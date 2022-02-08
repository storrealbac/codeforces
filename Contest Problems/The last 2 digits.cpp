#include<bits/stdc++.h>

#define int long long

using namespace std;

signed main(){

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int ans = a % 100;
    ans *= b%100;
    ans *= c%100;
    ans *= d%100;

    ans%=100;

    if (ans < 10)
        cout << 0;

    cout << ans << endl;

}