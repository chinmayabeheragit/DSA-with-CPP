#include <bits/stdc++.h>
using namespace std;

int findSecondLargest(int arr[], int n) {
    if (n < 2) return -1;

    int largest = INT_MIN;
    int second = INT_MIN;

    for (int i = 0; i < n; i++) {
        // If current element is greater than largest, update both
        if (arr[i] > largest) {
            second = largest;
            largest = arr[i];
        }
        // If arr[i] is not equal to largest, but greater than second
        else if (arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }

    // If second was never updated, return -1
    return (second == INT_MIN) ? -1 : second;
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


//TC - O(n); sc - O(1)