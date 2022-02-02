#include<bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;

    unordered_map<string, int> registration;
    for (int i = 0; i < n; i++) {
        string user;
        cin >> user;

        registration[user]++;

        if (registration[user] == 1)
            cout << "OK" << endl;
        else cout << user << registration[user]-1 << endl;
    }

    return 0;
}