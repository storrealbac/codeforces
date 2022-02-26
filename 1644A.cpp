#include<bits/stdc++.h>

using namespace std;

void solve() {

    bool r = 0, g = 0, b = 0, possible = 1;

    string S;
    cin >> S;

    for (char c : S) {

        switch (c) {
            case 'r':
                r = 1;
                break;
        
            case 'g':
                g = 1;
                break;

            case 'b':
                b = 1;
                break;

            case 'R':
                if (!r) possible = 0;
                break;

            case 'G':
                if (!g) possible = 0;
                break;

            case 'B':
                if (!b) possible = 0;
                break;
        }

        if (!possible) break;
    }

    if (possible) cout << "YES" << endl;
    else cout << "NO" << endl;

}

int main() {

    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}