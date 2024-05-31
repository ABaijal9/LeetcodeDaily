class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int s = 0,e = n-1;
        int ans = 0;
        for(int i = 0 ;i < n;i++){
            ans ^= nums[i];
        }
        return ans;
    }
};