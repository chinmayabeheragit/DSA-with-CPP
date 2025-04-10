#include<bits/stdc++.h>
using namespace std;

string intToRoman(int num) {
    string result = "";
    vector<pair<int, string>> romanMap = {
        {1000, "M"},
        {900, "CM"},
        {500, "D"},
        {400, "CD"},
        {100, "C"},
        {90, "XC"},
        {50, "L"},
        {40, "XL"},
        {10, "X"},
        {9, "IX"},
        {5, "V"},
        {4, "IV"},
        {1, "I"}
    };
    
    for (auto& pair : romanMap) {
        while (num >= pair.first) {
            result += pair.second;
            num -= pair.first;
        }
    }
    
    return result;
}
int main() {
    int num = 1994;
    cout << "Integer: " << num << " in Roman is: " << intToRoman(num) << endl;
    num = 58;
    cout << "Integer: " << num << " in Roman is: " << intToRoman(num) << endl;
    return 0;
}