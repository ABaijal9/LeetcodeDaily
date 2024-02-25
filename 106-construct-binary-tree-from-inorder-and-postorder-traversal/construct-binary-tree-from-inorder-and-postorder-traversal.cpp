class Solution {
public:
    TreeNode* InPost(vector<int>& inorder, vector<int>& postorder,int start, int end, int& pos){
        if(start > end || pos < 0){ return NULL;}
        TreeNode* root = new TreeNode(postorder[pos]);
        int index = -1;
        for(int i = start; i <= end; i++){
            if(postorder[pos] == inorder[i]) {
                index = i;
                break;
            }
        }
        pos--;
        root->right = InPost(inorder, postorder,index+1, end,pos);
        root->left = InPost(inorder, postorder,start, index-1 ,pos);
        
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int pos = postorder.size()-1;
        TreeNode* root = InPost( inorder, postorder,0, inorder.size()-1,pos);
        return root;  
    }
};