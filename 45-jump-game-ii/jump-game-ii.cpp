class Solution {
public:
int ans = 0 ;
long long sol(vector<int>& nums, int n, int currpos, vector<int> &dp){
    //base case

    if( currpos == n-1 ){
            return 0;
    }
    if(dp[currpos] != -1) return dp[currpos]; 
    //calculation
    long long least = INT_MAX;
    
    for(int i = 1 ; i <= nums[currpos]; i++){
        if( i + currpos > n-1) break;
      // if(nums[currpos+i] != 0){
            least = min(least, 1+sol(nums, n, i + currpos , dp));
      // }
    }
    return dp[currpos] = least;
}
int jump(vector<int>& nums){
    int n= nums.size();
    vector<int> dp(n,-1);
    return sol(nums, n, 0 , dp);
    }
};