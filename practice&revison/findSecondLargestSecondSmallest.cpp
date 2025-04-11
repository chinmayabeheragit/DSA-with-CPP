#include<bits/stdc++.h>
using namespace std;

void findSecondSmallestLargest(vector<int>&arr){
    int largest = INT_MIN, secondLargest = INT_MIN;
    int smallest = INT_MAX, secondSmallest = INT_MAX;

    for(int i = 0; i<arr.size(); i++){
        if(arr[i] > largest){
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest){
            secondLargest = arr[i];
        }

        if(arr[i]<smallest){
            secondSmallest = smallest;
            smallest = arr[i];
        }else if (arr[i] < secondSmallest && arr[i] != smallest){
            secondSmallest = arr[i];
        }

    }
    cout << "Second Smallest: " << secondSmallest << ", Second Largest: " << secondLargest << endl;

}

int main(){
    vector<int> arr = {12,23,1,24,56,10};
    findSecondSmallestLargest(arr);
    return 0;
}

