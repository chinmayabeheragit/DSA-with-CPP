#include<bits/stdc++.h>
using namespace std;

// write an code we can find if the guy is adult or not the age limit is 18

int main(){
    int age;
    cin >> age;
    if(age >=18){
        cout << "you are adult";
    }else if(age<10){
        cout << "you are notAdult";
    }
    return 0;
    }

