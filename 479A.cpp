#include<bits/stdc++.h>

using namespace std;

int main() {

    int x, y, z;
    cin >> x >> y >> z;

    int mx = 0;
    mx = max(mx, x*y*z);
    mx = max(mx, (x+y)*z);
    mx = max(mx, x*(y+z));
    mx = max(mx, x+y+z);

    cout << mx << endl;

    return 0;
}