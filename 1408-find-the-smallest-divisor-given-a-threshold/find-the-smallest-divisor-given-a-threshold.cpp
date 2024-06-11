class Solution {
public:

    int fun(vector<int>& nums, int div){
        int result = 0;
        for(auto it: nums) result += ceil(double(it)/double(div));
        return result;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
       int low = 1;
       int high = *max_element(nums.begin(), nums.end()); // O(n)
       int ans = 0;
       while(low<=high){
        int mid = (low+high)/2;
        if(fun(nums, mid) <= threshold){
            ans = mid;
            high=mid-1;
        }
        else low = mid+1;
       }
       return ans;
    }
};