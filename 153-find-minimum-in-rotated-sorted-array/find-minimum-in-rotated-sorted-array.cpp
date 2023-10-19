class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        if(n == 1)return nums[0];
        int i = 0;
        //j = n-1;
        if(nums[i] < nums[n-1]) return nums[i];
         //check which way to check: left to right or right to left
        // logic used same as monotonic array
        i = n-1;
        while(nums[i-1] < nums[i] && i >= 0) i--;
        return nums[i];

    }
};