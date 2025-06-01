#include <bits/stdc++.h>
using namespace std;

// Brute-force function to calculate H-index
int findHindexBruit(vector<int>& arr) {
    int n = arr.size();
    int hIndex = 0;

    for (int h = 1; h <= n; h++) {  // Try all possible H values from 1 to n
        int count = 0;

        for (int c : arr) {
            if (c >= h) count++;   // Count how many citations are ≥ current h
        }

        if (count >= h) {
            hIndex = h;            // Update hIndex if valid
        }
    }

    return hIndex;
}

// Driver code to test the function
int main() {
    vector<int> citations = {3, 0, 5, 3, 0};

    cout << "H-Index is: " << findHindexBruit(citations) << endl;

    return 0;
}
