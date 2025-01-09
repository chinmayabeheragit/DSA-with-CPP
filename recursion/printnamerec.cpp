#include<bits/stdc++.h>
using namespace std;

void namerec (string name, int n){
    if(n == 0){
        return;
    }

    cout << name << endl;
    namerec(name, n - 1); // each step it decrese n by -1

}
int main(){
    string name;
    int n;

    cout << "enter your name: ";
    cin >> name;

    cout << "enter how many time you want to print: ";
    cin >> n;

    namerec(name,n);

}