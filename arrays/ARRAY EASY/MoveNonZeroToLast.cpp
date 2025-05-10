#include <iostream>
using namespace std;

void moveZerosToEnd(int arr[], int n) {
    int j = 0; // Pointer to place the next non-zero element

    // Traverse the array
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {  // If element is non-zero
            arr[j] = arr[i];
            j++;
        }
    }

    // Fill the remaining positions with zeros
    for (int i = j; i < n; i++) {
        arr[i] = 0;
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];

    // Input the array elements
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Rearrange the array
    moveZerosToEnd(arr, n);

    // Output the modified array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
