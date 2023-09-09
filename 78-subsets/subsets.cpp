class Solution {
public:
    vector<vector<int>> ans;
    void solve(vector<int>& nums, vector<int>&v, int in , int n){
        //base case
        if(in == n){ 
         //   if(find(ans.begin(), ans.end(), v ) == ans.end()) ans.push_back(v);
            ans.push_back(v);
            return;
        }
        //rec case
        //exclude krege
            solve(nums, v,  in+1 , n);
         //include krege
            v.push_back(nums[in]);
            solve(nums, v, in+1 , n);
            v.pop_back();
            
            return;
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> v;
        sort(nums.begin(), nums.end());
        solve(nums, v, 0 , nums.size());
        return ans;
    }
};