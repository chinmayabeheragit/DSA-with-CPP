#include <bits/stdc++.h>
using namespace std;

int removeDuplicatesBrute(int arr[], int n) {
    set<int> s;

    // Insert all elements into the set
    for (int i = 0; i < n; i++) {
        s.insert(arr[i]); // set contain all the unique element 
    }

    // Copy unique elements back to the array
    int j = 0;
    for (int val : s) {  // we itreat the set container and store it in val and then we copy the val to j
        arr[j++] = val;
    }

    return s.size(); // Number of unique elements
}

int main() {
    int arr[] = {1, 1, 2, 2, 2, 3, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    int k = removeDuplicatesBrute(arr, n);

    cout << "Brute Force - Unique Elements:\n";
    for (int i = 0; i < k; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

// ⏱ Time & Space:
// Time: O(n log n) (due to set insertion)

// Space: O(n) (extra set)
