class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int,int> umap;  
  
    for (auto x : nums){
            umap[x]++;
            if(umap[x] == 2){
                umap.erase(x);
            }
    }
    vector <int> ans;
       for(auto it: umap){
           ans.push_back(it.first);
       }
    return ans;
    }
};