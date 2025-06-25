#include <bits/stdc++.h>
using namespace std;

int findMaxOptimal(int arr[], int n) {
    int maxElement = arr[0];
    for (int i = 0; i < n; i++) {
        if (arr[i] > maxElement)
            maxElement = arr[i];
    }
    return maxElement;
}

int main() {
    int arr[] = {2, 5, 1, 3, 0};
    int n = 5;
    cout << "Largest (Optimal): " << findMaxOptimal(arr, n) << endl;
    return 0;
}


// ⏱ Complexity:
// Time: O(n) ✅

// Space: O(1)

// 📌 Why It’s Optimal:
// Still O(n), but uses raw arrays and indexing, which are:

// Slightly faster at low level (no iterator overhead)

// Common in competitive programming, embedded, and system-level code

// Gives manual control over size and memory