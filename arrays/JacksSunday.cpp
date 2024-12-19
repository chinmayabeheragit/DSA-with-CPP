#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s; // Start day
    int a, ans = 0;
    cin >> a; // Number of days
    
    unordered_map<string, int> m;
    m["mon"] = 6; m["tue"] = 5; m["wed"] = 4;
    m["thu"] = 3; m["fri"] = 2; m["sat"] = 1;
    m["sun"] = 0;

    // Calculate the number of Sundays
    if (a - m[s] >= 1) 
        ans = 1 + (a - m[s]) / 7;

    cout << ans;
}
