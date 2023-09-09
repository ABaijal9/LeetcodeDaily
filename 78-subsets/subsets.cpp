class Solution {
public:
    vector<vector<int>> ans;
    void solve(vector<int>& nums, vector<int> v, int in , int n){
        //base case
        if(in == n){ 
            if(find(ans.begin(), ans.end(), v ) == ans.end()) ans.push_back(v);
           // ans.push_back(v);
            return;
        }
        //rec case
        //exclude krege
            solve(nums, v,  in+1 , n);
         //include krege
            if(find(v.begin(), v.end(), nums[in] ) == v.end()) 
            v.push_back(nums[in]);
            solve(nums, v, in+1 , n);
            
            return;
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> v;
        solve(nums, v, 0 , nums.size());
        return ans;
    }
};