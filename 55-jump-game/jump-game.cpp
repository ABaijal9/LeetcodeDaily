class Solution {
public:

    bool canJump(vector<int>& nums) {

        int n = nums.size()-1;
        // if(nums[0] == 0 && n > 0 ) return false;
       
        int max_reach = 0;

        for(int i = 0 ; i <= n ; i++){
            
            if(i > max_reach) return false;  
            max_reach = max(max_reach , i + nums[i] );
            if(max_reach >= n) return true;   

        }
        return false;

    }
};