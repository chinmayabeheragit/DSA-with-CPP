#include <bits/stdc++.h>
using namespace std;

int findSecondLargest(int arr[], int n) {
    sort(arr, arr + n); // Sort ascending

    // Start from second last and move left to find smaller than largest
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] < arr[n - 1])
            return arr[i];
    }

    return -1; // No second largest found (all elements same)
}

int main() {
    int arr[] = {1, 2, 4, 6, 7, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = findSecondLargest(arr, n);

    if (result == -1)
        cout << "No second largest element found." << endl;
    else
        cout << "Second largest element is: " << result << endl;

    return 0;
}
