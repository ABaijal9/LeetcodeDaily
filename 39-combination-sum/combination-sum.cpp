class Solution {
public:
vector<vector<int>> ans; //final vala
    void solve(vector<int>& candidates, int target, vector<int>& sample, int s){
        if(0 == target){
                 ans.push_back(sample);
                 return;
            }
            
            if( target < 0) return;

        for(int i = s ; i < candidates.size() ; i++){
            int c = candidates[i];
            if(target >= c){
                sample.push_back(c);
                solve(candidates, target-c, sample ,i);  //with it
                sample.pop_back();
            }         
        }
        return ;
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> sample;  // try vala
        int n =  candidates.size();
        solve(candidates, target, sample, 0);
        return ans;
}
};