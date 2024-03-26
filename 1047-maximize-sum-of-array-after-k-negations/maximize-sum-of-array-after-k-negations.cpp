class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
       int n = nums.size();
        sort(nums.begin(), nums.end());
        int sum = 0;
        for(int i = 0 ; i < n && k ; i++){
            cout << nums[i] << " ";
            if(nums[i] < 0){
                nums[i] *= -1;
                k--;
                }
            else if(nums[i] == 0 || nums[i] > 0){
                break;
            }
        }
        sort(nums.begin(), nums.end());
        if(k){
            if(k%2 != 0) nums[0] *= -1;
                    k = 0;           
        }
        for(auto it: nums) sum += it;
        return sum;
    }
};