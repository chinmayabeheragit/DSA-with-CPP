#include <bits/stdc++.h>
using namespace std;

// Function to perform left rotation on the array
void leftRotate(int arr[], int n, int d) {
    d = d % n;  // Normalize d to avoid unnecessary rotations
    if (d == 0) return;  // No rotation needed if d is 0 or a multiple of n

    reverse(arr, arr + d);       // Reverse the first d elements
    reverse(arr + d, arr + n);   // Reverse the remaining elements
    reverse(arr, arr + n);       // Reverse the entire array
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int d;
    cout << "Enter the number of left rotations: ";
    cin >> d;

    leftRotate(arr, n, d);

    cout << "Array after left rotation: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
