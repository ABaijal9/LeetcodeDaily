/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {  
    //      map<col,map<row, val>>;
    map<int, map<int, multiset<int>>> mp;
    
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> v;
        queue<pair<TreeNode*, pair<int,int>>> q;
        q.push({root,{0,0}});

        while(!q.empty()){
            auto f = q.front();
            q.pop();

            TreeNode* t = f.first;
            int col = f.second.first;
            int row = f.second.second;
                mp[col][row].insert(t->val);
                if(t->left){
                    pair<TreeNode*, pair<int,int>> p;
                    p.first = t->left;
                    p.second = make_pair(col-1,row+1);
                    q.push(p);
                }
                if(t->right){
                    pair<TreeNode*, pair<int,int>> p;
                    p.first = t->right;
                    p.second = make_pair(col+1,row+1);
                    q.push(p);
                }
        }
           for(auto& col : mp){
               vector<int> colval;
               for(auto& row : col.second){
                       colval.insert(colval.end(), row.second.begin(), row.second.end());
               }
               v.push_back(colval);
           }
            return v;
        }
};