#include<bits/stdc++.h>

#define int long long

using namespace std;

void solve() {

    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int GCD_1 = arr[0];
    int GCD_2 = arr[1];

    for (int i = 2; i < n; i+=1) {
        if (i % 2 == 0)
            GCD_1 = __gcd(GCD_1, arr[i]);
        else
            GCD_2 = __gcd(GCD_2, arr[i]);
    }


    int solution_a = GCD_1, solution_b = GCD_2;

    for (int i = 1; i < n; i+=2)
        if (arr[i] % GCD_1 == 0) {
            solution_a = 0;
            break;
        }

    for (int i = 0; i < n; i += 2)
        if (arr[i] % GCD_2 == 0) {
            solution_b = 0;
            break;
        }

    cout << max(solution_a, solution_b) << endl;

    return;
}

signed main() {

    size_t t;
    cin >> t;
    while(t--)
        solve();

    return 0;
}