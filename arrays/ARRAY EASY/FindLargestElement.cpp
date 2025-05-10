#include <bits/stdc++.h>
using namespace std;

// Function to find the largest element in a vector
int findLargestElement(const vector<int> &arr, int n) {
    int max = arr[0];
    for (int i = 0; i < n; i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int n;

    // Input vector size
    cout << "Enter the size of the array: ";
    cin >> n;

    // Input vector elements
    vector<int> arr(n);
    cout << "Enter " << n << " elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Call the function to find the largest element
    int max = findLargestElement(arr, n);

    cout << "The largest element in the array is: " << max << endl;
    return 0;
}
