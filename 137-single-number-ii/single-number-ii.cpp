class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> umap;  
  
    for (auto x : nums){
            umap[x]++;
            if(umap[x] == 3){
                umap.erase(x);
            }
    }
        unordered_map<int,int>::iterator it=umap.begin();
    return it->first;
    }
};