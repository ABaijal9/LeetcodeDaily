class Solution {
public:
    TreeNode* addOneRow(TreeNode* root, int val, int depth, bool left = true) {
        //keeping a default value of left 
        if(depth == 1){
            TreeNode* toot = new TreeNode(val);
            (left ? toot->left : toot->right ) = root; 
            return toot;
        }
        if(root){
            root->left = addOneRow(root->left, val, depth-1);
            root->right = addOneRow(root->right, val, depth-1, false);
        }
        
        return root;
    }
};