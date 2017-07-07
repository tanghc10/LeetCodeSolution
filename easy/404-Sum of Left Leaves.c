/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int sumOfLeftLeaves(struct TreeNode* root) {
    if (root == NULL){
        return 0;
    }else if (root->left == NULL && root->right == NULL){
        return 0;
    }
    int result = 0;
    if (root->left){
        result += func1(root->left);
    }
    if (root->right){
        if (root->right->left != NULL || root->right->right != NULL){
            result += func1(root->right);
        }
    }
    return result;
}

int func1(struct TreeNode *root){
    int result = 0;
    if (root == NULL){
        return 0;
    }
    if (!(root->left) && !(root->right)){
        return root->val;
    }
    if (root->left){
        result += func1(root->left);
    }
    if (root->right){
        if (root->right->left != NULL || root->right->right != NULL){
            result += func1(root->right);
        }
    }
    return result;
}
