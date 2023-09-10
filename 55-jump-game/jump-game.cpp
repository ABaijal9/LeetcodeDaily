class Solution {
public:

    bool canJump(vector<int>& nums) {
        int n= nums.size();
        int last = 0 ;
        if(n == 1) return true;
    
        for(int i = 0 ; i < n; i++){
            if(i == last && nums[i] == 0) return false;
            int index = nums[i] + i;
            if(index > last) last = index;  //update
            if(last >= n-1) return true;
        }
        return false;
    }
};