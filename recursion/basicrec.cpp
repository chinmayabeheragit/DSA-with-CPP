#include<bits/stdc++.h>
using namespace std;
int cnt = 0;
void functionrecusrsion(){
    if(cnt == 3)
    return;
    cout << cnt << endl;
    cnt ++;
    functionrecusrsion();
}
int main(){
    functionrecusrsion();
    return 0;
}