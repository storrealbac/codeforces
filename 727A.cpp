#include <bits/stdc++.h>

#define int int64_t

using namespace std;

bool backtracking(int x, int b, queue<int> path) {

    if (x == b) {
        cout << "YES" << endl;
        cout << path.size() << endl;
        while(!path.empty()) {
            cout << path.front() << " ";
            path.pop();
        }
        cout << endl;
        return true;
    }
    
    if (x >  b)
        return false;


    queue<int> A = path, B = path;

    A.push(x*2);
    B.push(x*10 + 1);

    return backtracking(x*2, b, A) | backtracking(10*x+1, b, B);
} 

signed main() {

    int a, b;
    cin >> a >> b;

    queue<int> Q;
    Q.push(a);

    bool possible = backtracking(a, b, Q);

    if (!possible) cout << "NO" << endl;
    return 0;
}