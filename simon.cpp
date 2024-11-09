// https://open.kattis.com/problems/simon
#include <bits/stdc++.h>
#include <string>
using namespace std;


string simonSays(string str) {

    string s1 = str.substr(0, 10);
    for (auto& x : s1) {
        x = tolower(x);
    }

    if (s1.compare("simon says") == 0) {
        return str.erase(0, 11);
    } else {
        return "";
    }
}

int main() {

    int n;
    cin >> n;
    cin.ignore();

    string s;
    
    for (int i = 0; i < n; i++) {
        getline(cin, s);
        cout << simonSays(s) << '\n';
    } 

    return 0;
}