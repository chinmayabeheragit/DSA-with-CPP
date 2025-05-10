#include <bits/stdc++.h>
using namespace std;

void findLargestAndSecondLargestDistinct(vector<int>& arr) {
    int largest = INT_MIN, secondLargest = INT_MIN;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    cout << "Largest: " << largest << endl;
    if (secondLargest == INT_MIN) {
        cout << "No distinct second largest element found." << endl;
    } else {
        cout << "Second Largest (distinct): " << secondLargest << endl;
    }
}

int main() {
    vector<int> arr = {12, 23, 1, 24, 56, 10, 56}; // Example input
    findLargestAndSecondLargestDistinct(arr);
    return 0;
}
