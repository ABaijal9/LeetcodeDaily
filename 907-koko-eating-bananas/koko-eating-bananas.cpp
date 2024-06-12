class Solution {
public:

    int time(vector<int>& piles, int h, int time, int n){
        int hours = 0;
        for(int i = 0; i < n; i++){
            hours += ceil(double(piles[i])/double(time));
            if(hours > h) return -1;
        }
        return hours;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int s = 1, e = *max_element(piles.begin(), piles.end());
        int k = INT_MAX;
        while(s<=e){
            int mid = (s+e)/2;
            int hours = time(piles,h, mid, n);
            if(hours == -1) s= mid+1;
            else if(hours <= h){
                k = mid;
                e = mid-1;
            }
            }
        return k;
    }
};