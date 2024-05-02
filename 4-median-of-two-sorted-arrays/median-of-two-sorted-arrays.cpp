class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        for(int i = 0 ; i < n; i++){
            nums2.push_back(nums1[i]);
        }
        int t = nums2.size();
        sort(nums2.begin(), nums2.end());
        if(t%2 == 0){
            double a = nums2[(t-1)/2];
            double b = nums2[(t)/2];
            return (a+b)/2;
        }
        else{ 
           return nums2[(t-1)/2];
        }
        
    }
};