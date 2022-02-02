#include<bits/stdc++.h>

using namespace std;

void solve() {
    int n, a, b;
    cin >> n >> a >> b;
    
    for (int i = 0; i < n; i++)
        cout << char('a' + i % b);
    cout << endl;

}

int main() {

    int t;
    cin >> t;

    while(t--)
        solve();    

    return 0;
}