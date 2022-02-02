#include<bits/stdc++.h>

using namespace std;

void solve() {

    int n;
    cin >> n;

    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
        cin >> b[i];

    for (int i = 0; i < n; i++) {
        if( a[i] < b[i])
            swap(a[i], b[i]);
    }

    cout << *max_element(a.begin(), a.end()) * *max_element(b.begin(), b.end()) << endl;

}

int main() {

    int t;
    cin >> t;

    while(t--)
        solve();    

    return 0;
}