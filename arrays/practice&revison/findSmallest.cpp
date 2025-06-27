#include<bits/stdc++.h>
using namespace std;

void findSmallest(vector<int>&arr){
    int smallest = INT_MAX;  // start with largest possible integeer
     for(int i = 0; i< arr.size(); i++){
        if(arr[i] < smallest)
        smallest = arr[i];
     }
     cout << "smallest element:" << smallest << endl;
}

int main(){
    vector<int> arr = {12,23,45,5,67};
    findSmallest(arr);
    return 0;
}