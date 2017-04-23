/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int maxDepth(struct TreeNode* root) {
    if (root == NULL){
        return 0;
    }else{
        int depth_left = maxDepth(root->left) + 1;
        int depth_right = maxDepth(root->right) + 1;
        return depth_left>depth_right? depth_left: depth_right;
    }
}
