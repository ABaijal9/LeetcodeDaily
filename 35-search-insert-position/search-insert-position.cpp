class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int ans = nums.size();
        int e = ans-1;
        int s = 0;
        while(s<=e){
            int mid = (s+e)/2;
            if(nums[mid] >= target){
                ans = mid;
                e = mid-1;
            }
            else s = mid+1;
        }
        return ans;
    }
};