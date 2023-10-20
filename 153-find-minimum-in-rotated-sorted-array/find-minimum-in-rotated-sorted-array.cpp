class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        if(n == 1)return nums[0];
        int i = 0 , j = n-1;
        int k = 0;
        
        while( i <= j ){
            if( nums[i] <= nums[j] ) return nums[i];
        //check which way to check: left to right or right to left
        // logic used same as monotonic array
            k = i+(j-i)/2;  //mistake k = n/2 do it by j/2
            if( nums[k] > nums[j] ) i = k+1;
            else{ j = k; }
           // else if(nums[k] < nums[k]) j = k;
    //    while(nums[i-1] < nums[i] && i >= 0) i--;
        
        }
        return nums[i];
    }
};