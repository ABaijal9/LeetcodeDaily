class Solution {
public:

    bool canJump(vector<int>& nums) {
        int n = nums.size()-1;
        if(n == 0) return true;
        int max_reach = 0;
        for(int i = 0 ; i <= n ; i++){
            max_reach = max(max_reach , i+nums[i]);
            if(max_reach == i) return false;
            if(max_reach >= n) return true;
        }
        return false;
    }
};