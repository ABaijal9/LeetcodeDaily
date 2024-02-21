class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root == p or root == q) return root;
        if(root->left and root->val >= p->val and root->val >= q->val) {
            return lowestCommonAncestor(root->left, p, q);
        }
        else if(root->right and root->val <= p->val and root->val <= q->val){
            return lowestCommonAncestor(root->right, p, q);
        }
            return root;
    }
};