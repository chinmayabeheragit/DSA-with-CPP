#include <bits/stdc++.h>
using namespace std;

// Function to find the length of the longest subarray with sum equal to 'k'
int getLongestSubarray(vector<int>& a, long long k) {
    int n = a.size();
    int len = 0;

    for (int i = 0; i < n; i++) {  // Outer loop: starting index of subarray

        for (int j = i; j < n; j++) {  // Middle loop: ending index of subarray

            long long s = 0;

            for (int K = i; K <= j; K++) {  // Inner loop: sum of a[i...j]
                s += a[K];
            }

            if (s == k) {
                len = max(len, j - i + 1);  // Update max length
            }

            // ------- Array Operation Log ----------
            // Let’s print what happens here
            // Example: i = 0
            // j = 0 → sum = 1 → ❌
            // j = 1 → sum = 1 + 2 = 3 → ❌
            // j = 2 → sum = 1 + 2 + 1 = 4 → ✅ → len = 3
            // j = 3 → sum = 1 + 2 + 1 + 0 = 4 → ✅ → len = 4
            // j = 4 → sum = 1 + 2 + 1 + 0 + 1 = 5 → ❌
            // j = 5 → sum = 1 + 2 + 1 + 0 + 1 + 1 = 6 → ❌
            // j = 6 → sum = 1 + 2 + 1 + 0 + 1 + 1 + 0 = 6 → ❌
            // ✅ Best so far: len = 4
        }

        // Similar logs would appear for i = 1, 2, ..., n-1
    }

    return len;
}


int main()
{
    // Input array
    vector<int> a = {1,1,1,2,1,1,1,1,1,1};
    
    // Target sum
    long long k = 10;

    // Call the function to get the result
    int len = getLongestSubarray(a, k);

    // Print the length of the longest subarray with sum equal to 'k'
    cout << "The length of the longest subarray is: " << len << "\n";

    return 0;
}
