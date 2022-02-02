#include<bits/stdc++.h>

using namespace std;

int main() {
    int x, y, z, a, b, c;
    cin >> x >> y >> z >> a >> b >> c;

    if (a-x < 0) {
        cout << "NO" << endl;
        return 0;
    }

    a -= x;

    if (a+b-y < 0) {
        cout << "NO" << endl;
        return 0;
    }

    if (a+b+c-y-z < 0) {
        cout << "NO" << endl;
        return 0;
    }

    cout << "YES" << endl;
}