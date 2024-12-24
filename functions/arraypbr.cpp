#include<bits/stdc++.h>
using namespace std;
void arraypbr(int arr[], int n){
    arr [0] += 100;
    cout << "value inside the function: "<< arr[0] << endl;
}

int main() {
    int n = 5;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    arraypbr(arr, n);

    cout << "value inside the function: " << arr[0] << endl;
    return 0;
}