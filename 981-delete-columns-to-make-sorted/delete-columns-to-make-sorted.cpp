class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int count = 0;
        int n = strs.size()-1;
        int m = strs[0].size();
       for(int j = 0 ; j < m; j++){
        for(int i = 0 ; i < n; i++){
            if(strs[i][j]>strs[i+1][j]){
                count++;
                break;
            }
        }
       }
        return count;
    }
};