#include<bits/stdc++.h>

using namespace std;

string numbers[20];
string hyphens[11];

int main() {

    numbers[0] = "zero";
    numbers[1] = "one";
    numbers[2] = "two";
    numbers[3] = "three";
    numbers[4] = "four";
    numbers[5] = "five";
    numbers[6] = "six";
    numbers[7] = "seven";
    numbers[8] = "eight";
    numbers[9] = "nine";
    numbers[10] = "ten";
    numbers[11] = "eleven";
    numbers[12] = "twelve";
    numbers[13] = "thirteen";
    numbers[14] = "fourteen";
    numbers[15] = "fifteen";
    numbers[16] = "sixteen";
    numbers[17] = "seventeen";
    numbers[18] = "eighteen";
    numbers[19] = "nineteen";

    hyphens[2] = "twenty";
    hyphens[3] = "thirty";
    hyphens[4] = "forty";
    hyphens[5] = "fifty";
    hyphens[6] = "sixty";
    hyphens[7] = "seventy";
    hyphens[8] = "eighty";
    hyphens[9] = "ninety";

    string n;
    cin >> n;

    if (n.size() == 1) {
        cout << numbers[n[0]-'0'] << endl;
        return 0;        
    } 

    

    if (n[0] == '1') {
        if (n[1] == '0') {
            cout << numbers[10] << endl;
            return 0;
        }
        cout << numbers[ (n[0]-'0')*10 + n[1]-'0'] << endl;
        return 0;
    }

    
    cout << hyphens[n[0]-'0'];
    
    if (n[1] != '0')
        cout << "-" << numbers[n[1]-'0'];

    cout << endl;


    return 0;
}