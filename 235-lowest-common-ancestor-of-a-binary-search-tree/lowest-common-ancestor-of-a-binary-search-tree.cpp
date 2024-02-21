class Solution {
public:
    bool exists(TreeNode* root, TreeNode* t) {
        if (root == NULL)
            return false;
        if (root == t)
            return true;
        if (exists(root->left, t) or exists(root->right, t))
            return true;
        return false;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root == p or root == q) return root;
        if(root->left and exists(root->left, p) and exists(root->left , q)) {
            return lowestCommonAncestor(root->left, p, q);
        }
        else if(root->right and exists(root->right, p) and exists(root->right, q)){
            return lowestCommonAncestor(root->right, p, q);
        }
            return root;
    }
};