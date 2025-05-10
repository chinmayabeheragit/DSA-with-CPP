#include<bits/stdc++.h>
using namespace std;

void rotate(vector<int>& nums, int k){
    int n = nums.size();
    k = k%n;

    vector<int> temp(n);

    for(int i = 0; i < n; i++){
        temp[(i+k)%n] = nums[i];
    }

    for(int i = 0; i < n; i++){
        nums[i] = temp[i];
    }
}
int main(){
    vector<int> nums = {1,2,3,4,5,6,7};
    int k = 3;
    rotate(nums,k);
    for(auto i : nums){
        cout<<i<<" ";
    }
    return 0;
}