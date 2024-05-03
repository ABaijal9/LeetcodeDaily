class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int start_value = 0 ;
        int n = nums.size();
        int min = INT_MAX;
        for(int i=0 ; i<n; i++ ){
           start_value += nums[i];
           if(start_value < min) min = start_value;
        }
        if(min <= 0 )return abs(min) + 1;
        return 1;
    }
};