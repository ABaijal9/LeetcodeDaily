class Solution {
public:
    int singleNonDuplicate(vector<int>& nums){
        int n = nums.size();
        if(n == 1) return nums[0];
        int s = 0,e = n-1;
        while(s<=e){
            int mid = (s+e)/2;
            if(mid == n-1 and nums[mid] != nums[mid-1])return nums[n-1]; //last
            else if(mid == 0 and nums[mid] != nums[mid+1])return nums[0]; //first
            else if(nums[mid] == 0 or (nums[mid] != nums[mid+1] and nums[mid] != nums[mid-1])) return nums[mid];
            else if(mid%2 == 0){//even position
                if(nums[mid] == nums[mid+1]) s = mid+1;
                else e = mid-1;
            }
            else{ //odd position
                if(nums[mid] == nums[mid-1]) s = mid+1;
                else e = mid-1;
            }}
        return nums[0];
    }
};