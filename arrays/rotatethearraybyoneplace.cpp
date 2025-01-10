#include <bits/stdc++.h>
using namespace std;

void rotateArrayByOne(int arr[], int n) {
    int temp = arr[0]; // Save first element
    for (int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1]; // Shift to left
    }
    arr[n - 1] = temp; // Place the first element to last index
}

void printArray(int arr[], int n) {  // finnaly print the rotated array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array: ";
    printArray(arr, n);

    rotateArrayByOne(arr, n);

    cout << "Array after one rotation: ";
    printArray(arr, n);

    return 0;
}
