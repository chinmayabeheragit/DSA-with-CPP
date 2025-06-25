// the first approach is the short we use introShort ( combination of quick , heap and insertion) and the TC is O(n log n) 
//we knwo that std::short() is O(n log n) and the space complexuity is O(1)
#include<bits/stdc++.h>
using namespace std;

int sortArr(vector<int>& arr) {
    sort(arr.begin(), arr.end()); // Brute: Sort the entire array (O(n log n))
    return arr[arr.size()-1];     // Return the last (largest) element
}


int main() {
    vector<int> arr1 = {2,5,1,3,0};
    vector<int> arr2 = {8,10,5,7,9};

    cout<<"The Largest element in the array is: "<<sortArr(arr1)<<endl;
    cout<<"The Largest element in the array is: "<<sortArr(arr2)<<endl;
    return 0;
}


//  Why It’s Brute:
// Sorts the entire array just to find the largest, which is unnecessary.

// Wastes computation and alters the original order of data.



