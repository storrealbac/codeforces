#include<bits/stdc++.h>

using namespace std;

int main () {

    string wires;
    cin >> wires;

    stack<char> s;

    for (char c : wires) {
        if (s.size() == 0)
            s.push(c);
        else if (s.top() == '+' and c == '+')
            s.pop();
        else if (s.top() == '-' and c == '-')
            s.pop();
        else
            s.push(c);
    }

    if (s.size() > 0) {
        cout << "No" << endl;
        return 0;
    }

    cout << "Yes" << endl;
    return 0;
}