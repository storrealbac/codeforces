#include<bits/stdc++.h>

using namespace std;

int main() {

    size_t n;
    cin >> n;

    vector<int> A(n);
    for (int i = 0; i < n; i++)
        cin >> A[i];

    int mx = 1, actual = 1;
    for (int i = 1; i < n; i++) {
        if (A[i-1] > A[i])
            actual = 1;
        else actual++;
        mx = max(mx, actual);
    }
    
    cout << mx << endl;
    return 0;
}