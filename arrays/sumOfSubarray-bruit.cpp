#include <bits/stdc++.h>
using namespace std;

// Function to find the length of the longest subarray with sum equal to 'k'
int getLongestSubarray(vector<int>& a, long long k) {
    int n = a.size();  // Get the size of the array

    int len = 0;       // Variable to store the maximum length of subarray

    // Outer loop to fix the starting point of subarray
    for (int i = 0; i < n; i++) {
        // Inner loop to fix the ending point of subarray
        for (int j = i; j < n; j++) {
            long long s = 0;  // Initialize subarray sum to 0

            // Loop to calculate the sum of subarray from index i to j
            for (int K = i; K <= j; K++) {
                s += a[K];  // Add current element to subarray sum
            }

            // If subarray sum equals 'k', update max length
            if (s == k) {
                len = max(len, j - i + 1);  // Update length if it's longer
            }
        }
    }

    // Return the length of the longest subarray found
    return len;
}

int main()
{
    // Input array
    vector<int> a = {1,1,1,1,1,1,1,1,1,1};
    
    // Target sum
    long long k = 10;

    // Call the function to get the result
    int len = getLongestSubarray(a, k);

    // Print the length of the longest subarray with sum equal to 'k'
    cout << "The length of the longest subarray is: " << len << "\n";

    return 0;
}
