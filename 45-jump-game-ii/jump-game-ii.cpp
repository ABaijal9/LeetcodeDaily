class Solution {
public:
int jump(vector<int>& nums){
    int steps = 0 , max_reach = 0 , jumps = 0;
    
    for(int i = 0 ; i < nums.size()-1; i++){
      max_reach = max( max_reach , nums[i] + i );
        if( i == steps){
          steps = max_reach;
          jumps++;
      }
    } 
      return jumps;
    }
};