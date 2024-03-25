class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int total_1 = 0;
        int maxo = 0;
        for(auto it: nums){
            if(it == 0) total_1 = 0;
            else total_1++;
            maxo = max( total_1, maxo);
        }
        return maxo;
    }
};