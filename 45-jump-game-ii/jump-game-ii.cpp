class Solution {
public:
int ans = 0 ;
int jump(vector<int>& nums ){
    int n = nums.size();
    int start = 0, end = 0;
    
    while(end < n-1){
        int farthest = 0;
        for(int i = start; i <= end; i++) 
        farthest = max(farthest, nums[i] + i);

        start = end+1;
        end = farthest;
        ans += 1;
    }
    return ans;
    }
};