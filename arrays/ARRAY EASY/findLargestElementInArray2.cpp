#include <bits/stdc++.h>
using namespace std;

// Function to find the largest element in an array
int findLargestElement(int arr[], int n) {
    int max = arr[0]; // Assume the first element is the largest
    for (int i = 0; i < n; i++) { // Loop through the rest of the array
        if (max < arr[i]) { // update max if a larger value is found
            max = arr[i]; // update max and max store largest element
        }
    }
    return max; // return the largest element
}

int main() {
    int n; // size of array

    // Input array size
    cout << "Enter the size of the array: ";
    cin >> n;

    // Input array elements
    int arr[n]; // array to store elements
    cout << "Enter " << n << " elements of the array: ";
    for (int i = 0; i < n; i++) { // loop to input elements
        cin >> arr[i]; // input elements
    }

    // Call the function to find the largest element
    int max = findLargestElement(arr, n); // function call

    cout << "The largest element in the array is: " << max << endl;
    return 0;
}
