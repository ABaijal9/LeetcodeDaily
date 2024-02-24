class Solution {
public:
    TreeNode* onerow(TreeNode* root, int val , int depth, int row){
        if(root== NULL) return root;
        if(row == depth-1){
            //create nodes
            TreeNode* leftt = new TreeNode(val);
            TreeNode* rightt = new TreeNode(val);
            //assigning following
            if(root->left) leftt->left = root->left;
            if(root->right) rightt->right = root->right;
            //assigning values
            root->left = leftt;
            root->right = rightt;
            return root;
        }
        onerow(root->left, val,depth,row+1);
        onerow(root->right, val,depth,row+1);
        return root;
    }
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth == 1){
            TreeNode* tom = new TreeNode(val);
            tom->left = root;
            return tom;
        }
        onerow(root, val,depth,1);
        return root;;
    }
};