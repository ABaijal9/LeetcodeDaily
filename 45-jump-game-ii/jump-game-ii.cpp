class Solution {
public:
int jump(vector<int>& nums){

    int n= nums.size();
    if( n == 1) return 0;
 
    int reach = 0 ;
    int rangemax = 0;
    int ans = 0;
    for(int currpos=0; currpos<n ; currpos++){
        rangemax = max(rangemax, nums[currpos] + currpos);
        if(rangemax >= n-1){
            ans++;
            return ans;
        }
        else if(currpos == reach){
          //1: make reach = rangemax (to expand reach)
          reach = rangemax;
          //2: add 1 more jump to ans
          ans++;
      }
    } 
        return ans;
    }
};