#include<bits/stdc++.h>

#define int long long

using namespace std;

bool solve() {
    
    int a, b, c, A, B, C;
    cin >> a >> b >> c;

    A = 2*b - c;
    B = a+c;
    C = 2*b - a;

    if (A > 0 and A % a == 0) return true;
    if (B > 0 and B%2 == 0 and B/2 % b == 0) return true;
    if (C > 0 and C % c == 0) return true;

    return false;
}

signed main() {

    size_t t;
    cin >> t;

    while(t--)
        ( solve() ) ? cout << "YES" << endl : cout << "NO" << endl;
    return 0;
}