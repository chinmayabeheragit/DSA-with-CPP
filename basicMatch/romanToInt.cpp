#include<bits/stdc++.h>
using namespace std;

int romanToInt(string s){
    unordered_map<char, int> romanMap = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };
    int total = 0;
    for(int i = 0; i< s.length(); i++){
        int curr = romanMap[s[i]];
        int next = romanMap[s[i+1]];
        if(curr < next){
            total -= curr;
        } else {
            total += curr;
        }
    }
    return total;

}
int main(){
    string  romanMap = "IV";
    cout << romanMap << " in integer is: " << romanToInt(romanMap) << endl;
    romanMap = "IX";
    cout << romanMap << " in integer is: " << romanToInt(romanMap) << endl;
    return 0;
}