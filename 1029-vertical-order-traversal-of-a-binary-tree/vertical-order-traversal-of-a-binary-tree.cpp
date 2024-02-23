class Solution {
    map<int, map<int, multiset<int>>> mp;

public:
    void solve(TreeNode* root, int row, int col) {
        if (root == NULL) return;

        mp[col][row].insert(root->val);

        // preorder
        solve(root->left, row + 1, col - 1);
        solve(root->right, row + 1, col + 1);
        return;
    }

    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> v;
        solve(root, 0, 0);

        for (auto& col : mp) {
            vector<int> colVals;
            for (auto& row : col.second) {
                for (auto& val : row.second) {
                    colVals.push_back(val);
                }
            }
            v.push_back(colVals);
        }

        return v;
    }
};