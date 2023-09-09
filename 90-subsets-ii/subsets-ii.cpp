class Solution {
public:
    vector<vector<int>> ans;
    void solve(vector<int>& nums, vector<int>v, int s){
    //base cacse
        if(s == nums.size()){
            sort(v.begin(), v.end());
            if(find(ans.begin(), ans.end(), v) == ans.end())
            ans.push_back(v);
            return;
        }     
    //rec call
        //exclude
        solve(nums, v, s+1);
        
        //include
        v.push_back(nums[s]);
        solve(nums, v, s+1);
        v.pop_back();
        return;
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> v;
        ans.push_back(v);
        solve(nums, v, 0);
        sort(ans.begin(), ans.end());
        return ans;
    }
};