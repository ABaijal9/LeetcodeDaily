class Solution {
public:
    int maxSum(vector<int>& nums) {
        int n = nums.size();
        
        int sum = INT_MIN;
        for(int i=0;i<n;i++){
            string s = to_string(nums[i]);
            sort(s.rbegin(), s.rend());
           
            for(int j = i+1 ; j < n;j++){
                string t= to_string(nums[j]);
                sort(t.rbegin(), t.rend());
                
                if(s[0] == t[0]) {
                   
                    sum = max(sum,nums[i]+nums[j]);}
            }
        }
        return max(sum,-1);
    }
};