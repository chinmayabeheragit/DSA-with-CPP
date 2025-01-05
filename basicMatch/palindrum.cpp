#include<iostream>
using namespace std;
int main () {
    int n;
    cin >> n;
    int revNum =0;
    int dupNum = n;
    while (n>0){
        int ld = n % 10;
        revNum = revNum * 10 + ld;
        n = n / 10;
    }
    if (dupNum == revNum)
    cout << "true";
    else
    cout << "false";
}