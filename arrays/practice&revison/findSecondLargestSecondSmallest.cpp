#include <bits/stdc++.h>
using namespace std;

void findSecondSmallestLargest(vector<int>& arr) {
    int largest = INT_MIN, secondLargest = INT_MIN;
    int smallest = INT_MAX, secondSmallest = INT_MAX;
    int n = arr.size();

    for (int i = 0; i < n; i++) {
        // Largest and Second Largest
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }

        // Smallest and Second Smallest
        if (arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        } else if (arr[i] < secondSmallest && arr[i] != smallest) {
            secondSmallest = arr[i];
        }
    }

    if (secondSmallest == INT_MAX) {
        cout << "No distinct second smallest element found." << endl;
    } else {
        cout << "Second Smallest: " << secondSmallest;
    }

    if (secondLargest == INT_MIN) {
        cout << ", No distinct second largest element found." << endl;
    } else {
        cout << ", Second Largest: " << secondLargest << endl;
    }
}

int main() {
    vector<int> arr = {12, 23, 1, 24, 56, 10};
    findSecondSmallestLargest(arr);
    return 0;
}
