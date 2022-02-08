#include<bits/stdc++.h>

#define int int64_t

const int MAX = 200001;

using namespace std;

signed main() {

    int n;
    cin >> n;

    int arr[MAX];
    memset(arr, 0, sizeof(arr));

    for (int i = 0; i < n; i++) {
        int pos;
        cin >> pos;

        while(arr[pos]) {
            arr[pos] = 0;
            pos++;
        }
        arr[pos] = 1;
    }

    int ans = 0;
    for (int i = 0; i < MAX; i++)
        ans += arr[i];

    if (ans == 2 or ans == 1 and n != 1)
        cout << "Y";
    else cout << "N";
    cout << endl;

    

    return 0;
}