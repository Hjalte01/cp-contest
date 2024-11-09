// https://open.kattis.com/problems/trik
#include <bits/stdc++.h>
#include <string>
using namespace std;


int main() {

    string s;
    cin >> s;

    int n = 1;

    for (char c : s) {
        if (c == 'A') {
            if (n == 1) n = 2;
            else if (n == 2) n = 1;
        } else if (c == 'B') {
            if (n == 2) n = 3;
            else if (n == 3) n = 2;
        } else if (c == 'C') {
            if (n == 1) n = 3;
            else if (n == 3) n = 1;
        }
    }
    
    cout << n;


    return 0;
}