class Solution {
public:
    vector<vector<int>> ans;
    void solve(vector<int>& nums, vector<int>&v, int s){
        ans.push_back(v); // above base case or it would forget some cases
//base case  
        if(s == nums.size()){
            return;
        }     
    //rec call
        for(int i = s; i < nums.size() ; i++){
            if( s == i || nums[i] != nums[i-1]){ //to avoid duplication ar[i] != ar[i-1] but work if i and s are equal for an exception
                v.push_back(nums[i]);
                solve(nums, v, i+1);
                v.pop_back();
            }
        }
        return;
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> v;
        sort(nums.begin(), nums.end());
        solve(nums, v, 0);
        return ans;
    }
};
