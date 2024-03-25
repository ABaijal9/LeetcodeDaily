class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int total_1 = 0;
        int maxo = 0;
        for(auto it: nums){
            total_1 = (total_1+it)*it;
            maxo = max( total_1, maxo);
        }
        return maxo;
    }
};