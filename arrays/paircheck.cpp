#include<bits/stdc++.h>
using namespace std;

bool isSpecialArray(vector<int>& nums) {
    int n = nums.size();
    
    // Iterate over adjacent pairs
    for (int i = 0; i < n - 1; i++) {
        // Check if nums[i] and nums[i+1] have different parity
        if ((nums[i] % 2) == (nums[i + 1] % 2)) {
            return false;  // If both are either even or odd, return false
        }
    }
    
    return true;  // All adjacent pairs have different parity
}

int main() {
    vector<int> nums = {2, 1, 4};
    cout << (isSpecialArray(nums) ? "true" : "false") << endl;  // Output should be true

    nums = {4, 3, 1, 6};
    cout << (isSpecialArray(nums) ? "true" : "false") << endl;  // Output should be false

    return 0;
}
