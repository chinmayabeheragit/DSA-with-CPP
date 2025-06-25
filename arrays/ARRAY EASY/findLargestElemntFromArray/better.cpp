// this one is better solution using linear search
// TC - O(n) and SC - O(1)

#include <bits/stdc++.h>
using namespace std;

int findMaxBetter(vector<int>& arr) {
    int maxElement = INT_MIN;
    for (int num : arr) {
        if (num > maxElement)
            maxElement = num;
    }
    return maxElement;
}

int main() {
    vector<int> arr = {2, 5, 1, 3, 0};
    cout << "Largest element (Better): " << findMaxBetter(arr) << endl;
    return 0;
}



//  Why It’s Better:
// Avoids sorting

// Uses modern C++ style (range-based for loop)

// Preserves original array order

// Elegant and readable