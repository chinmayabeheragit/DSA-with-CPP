#include<iostream>
using namespace std;
int main (){
    int sum = 0;
    int n;
    cin >> n;
    int dup = n ;
    while(n>0){
         int ld = n % 10 ;
         sum = sum + ld*ld*ld;
         n = n/10;
    }
    if(sum == dup){
    cout << "true";
    }
    else{
    cout << "false";
    }
    return 0;
}