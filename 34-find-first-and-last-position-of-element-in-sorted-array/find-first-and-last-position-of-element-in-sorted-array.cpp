class Solution {
public:
vector<int> ans = {-1,-1};
    vector<int> searchRange(vector<int>& nums, int target) {
        int s = 0;
        int e = nums.size()-1;

    while(s<=e){  // LB
        int mid = (s+e)/2;
        if(nums[mid] == target) {
            ans[0] = mid;
            e = mid-1;
        }
        else if(nums[mid] >= target) e = mid-1;
        else s = mid+1; //a[mid] < target     
    }
    if(ans[0] == -1) return ans;
    s = ans[0];
    e = nums.size()-1;
    while(s<=e){  //UB
        int mid = (s+e)/2;
        if(nums[mid] == target) {
            ans[1] = mid;
            s = mid+1;
        }
        else if(nums[mid] < target)   s = mid+1;
        else e = mid-1; //a[mid] > target   
    }
        return ans;
    }
};