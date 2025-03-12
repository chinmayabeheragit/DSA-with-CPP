#include<bits/stdc++.h>
using namespace std;
int largestElement(int arr[], int n){
    int max = arr[0];//it store the max number
    for(int i = 0; i<n; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    } return max;
}
int main(){
    int n;
    cout << "enter the size of the array";
    cin >> n;
    int arr[n];
    cout << "enter element of the array";
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    } 
    cout << largestElement(arr, n);

}