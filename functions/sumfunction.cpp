#include<bits/stdc++.h>
using namespace std;

int sum(int num1 ,int num2, int num4){
    int num3 = num1 + num2 + num4;
    return num3;
}
int main () {
    int num1, num2, num4 ;
    cin >> num1 >> num2 >> num4; ;
    int res = sum (num1 , num2, num4);
    cout << res;
    return 0;
}

//we could write this code using void fuction like 
// this 
// void sum(int num1 ,int num2, int num4){
//     int num3 = num1 + num2 + num4;
//     cout << num3;
// }
// int main {
//     int num1, num2, num4 ;
//     cin >> num1 >> num2 >> num4; ;
//     sum (num1 , num2, num4);
//     return 0;
// }