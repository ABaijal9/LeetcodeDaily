class Solution {
public:
    bool monotonicinc(vector<int>& nums, int &i, int &n){
        //base case
        if(i == n-1) return true;
        //rec case
        if(nums[i] > nums[i+1]) return false;
            i++;
            return monotonicinc(nums, i, n);
    }

    bool monotonicdec(vector<int>& nums, int &i, int &n){
     //base case
     if(i == n-1) return true;
     //rec case
     if(nums[i] < nums[i+1]) return false;
        i++;
        return monotonicdec(nums, i, n);
 }

    bool isMonotonic(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return true;
        int i = 0;
        if (nums[i] < nums[n-1]) return monotonicinc(nums, i, n);
        else if (nums[i] > nums[n-1]) return monotonicdec(nums, i, n);
        
        while(i < n-1){
            if(nums[i] !=nums[i+1]) return false;
            i++;
        }
        return true;
        
    }
};