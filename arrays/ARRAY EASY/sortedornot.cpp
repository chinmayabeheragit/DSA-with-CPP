#include <bits/stdc++.h>
using namespace std;

// Function to check if the array is sorted in non-decreasing order
int isSorted(int n, vector<int>& a) {
    for (int i = 1; i < n; i++) {
        if (a[i] < a[i - 1]) {
            return false;
        }
    }
    return true;
}

// Function to check if the array is sorted and rotated
bool isSortedAndRotated(vector<int>& nums) {
    int n = nums.size();

    // Check if the array is already sorted
    if (isSorted(n, nums)) {
        return true;
    }

    // Count the number of "drops" in the array (where nums[i] > nums[i+1])
    int dropCount = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] > nums[(i + 1) % n]) {
            dropCount++;
        }
        if (dropCount > 1) { // If there is more than one drop, it can't be sorted-rotated
            return false;
        }
    }

    return true; // Valid sorted and rotated array
}

int main() {
    vector<int> nums1 = {3, 4, 5, 1, 2}; // Example 1
    vector<int> nums2 = {2, 1, 3, 4};    // Example 2
    vector<int> nums3 = {1, 2, 3};       // Example 3

    cout << (isSortedAndRotated(nums1) ? "true" : "false") << endl; // Output: true
    cout << (isSortedAndRotated(nums2) ? "true" : "false") << endl; // Output: false
    cout << (isSortedAndRotated(nums3) ? "true" : "false") << endl; // Output: true

    return 0;
}
