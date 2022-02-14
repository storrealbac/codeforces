#include<bits/stdc++.h>

#define int int64_t

using namespace std;

signed main() {

    int n;
    cin >> n;

    string alls = "ab";
    int x = 0;
    char last = 'x';
    for (int i = 0; i < (n- (n&1))/2; i++) {
        cout << alls[i%2] << alls[i%2];
        last = alls[i%2];
    }
    if (n&1) (last == 'a') ? cout << "b" : cout << "a";
    cout << endl;

    return 0;
}