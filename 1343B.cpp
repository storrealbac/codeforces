#include<bits/stdc++.h>

#define int long long

using namespace std;
void solve(){

    int n;
    cin >> n;

    if (n % 4 != 0) {
        cout << "NO" << endl;
        return;
    }

    int h = n/2;
    int sum_even = h*(h+1), sum_odd = h*h;

    int sum_last = 0;
    if (sum_odd != sum_even)
        sum_last = h;

    cout << "YES" << endl; 
    for (int i = 1; i <= h; i++)
        cout << i*2 << " ";
    for(int i = 1; i <= h-1; i++)
        cout << (i*2)-1 << " ";
    cout << (2*h) - 1 + sum_last << endl;



}
signed main() {

    int t;
    cin >> t;

    while(t--)
        solve();

    return 0;
}