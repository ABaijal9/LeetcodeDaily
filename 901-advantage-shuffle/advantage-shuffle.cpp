class Solution {
public:
    vector<int> advantageCount(vector<int>& more, vector<int>& less) {
        sort(more.begin(), more.end());
        int n = less.size();
        vector<pair<int,int>> tracker(n); //tracker of place

        vector<int> ans(n,-1); //answer
        for(int i = 0; i < n; i++){
            tracker[i].first = less[i];
            tracker[i].second = i;
        }
        vector<int> extra;
        sort(tracker.begin(), tracker.end());
        int j = 0;
        for(int i = 0 ; i < n ; i++){
            if(more[i] > tracker[j].first){
                ans[tracker[j++].second] = more[i];
            }
            else{
                extra.push_back(more[i]);
            }
        }
        if(!extra.size()) return ans;
        j = 0;
        for(int i = 0 ; i < n; i++){
            if(ans[i] == -1){
                ans[i] = extra[j++];
            }
            if(j == extra.size()) break;
        }

        return ans;
    }
};