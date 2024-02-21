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
    unordered_map<TreeNode*, bool> m;
    int cam;
public:
    void camera(TreeNode* root, TreeNode* parent){
        if(!root) return;

            camera(root->left, root);
            camera(root->right, root);
        if((m.count(root) == 0 and parent == NULL ) or (m.count(root->left)
         == 0 or m.count(root->right) == 0)){
            m[parent] = true;
            m[root] = 1;
            m[root->left] = 1;
            m[root->right] = true;
            cam++;
        }
        
    }
    int minCameraCover(TreeNode* root) {
        cam = 0;
        m.insert({NULL,true});
        camera(root,NULL);
        return cam;
        
    }
};