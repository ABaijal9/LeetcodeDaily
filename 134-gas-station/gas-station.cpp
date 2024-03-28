class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int profit = 0;
        int position = 0;
        int n = gas.size();
        int c = 0 , g = 0;
        for(int i = 0 ; i < n; i++){
            profit += gas[i]-cost[i];
            if(profit < 0) {
                profit = 0;
                position = i+1;
            }
            g+=gas[i];
            c+=cost[i];
        }
        if(c>g) return -1; 
        return position;
    }
};