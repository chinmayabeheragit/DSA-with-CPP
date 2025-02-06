#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int maxSum = 0, currentSum = nums[0];  // Initialize sums

        // Loop through the array starting from index 1
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > nums[i - 1]) {
                currentSum += nums[i];  // Add to current sum if ascending
            } else {
                maxSum = max(maxSum, currentSum);  // Update maxSum
                currentSum = nums[i];  // Reset currentSum to current element
            }
        }

        // Final check to make sure the last subarray sum is considered
        maxSum = max(maxSum, currentSum);

        return maxSum;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {10, 20, 30, 5, 10, 50};
    int result = solution.maxAscendingSum(nums);
    cout << "Maximum Ascending Sum: " << result << endl;  // Output: 65
    return 0;
}
