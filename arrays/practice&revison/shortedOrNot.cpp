#include<bits/stdc++.h>
using namespace std;

bool isSorted(vector<int>&arr){
    for(int i = 1; i<arr.size(); i++){
        if(arr[i] < arr[i-1]){
        return false;
    }
}
return true;
}


int main(){
    vector<int> arr1 = {1,2,3,4,5,6};
    vector<int> arr2 = {3,6,1,2,3,7};

    cout << "is arr1 sorted?" << (isSorted(arr1)? "yes" : "no") << endl;
    cout << "is arr2 sorted?" << (isSorted(arr2)? "yes" : "no") << endl;
    
    return 0;
}