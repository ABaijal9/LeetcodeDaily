class Solution {
public:

    void insert(TreeNode*& root, int data){
        if(root == NULL){
            root = new TreeNode(data);
            return;
        }

        if(data < root->val) insert(root->left,data);
        else insert(root->right,data);
        return;
    }

    TreeNode* bstFromPreorder(vector<int>& preorder) {

        TreeNode* root = NULL;
        for(int i = 0 ; i < preorder.size(); i++){
            insert(root, preorder[i]);
        }
        return root;
    }
};