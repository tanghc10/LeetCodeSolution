/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* mergeTrees(struct TreeNode* t1, struct TreeNode* t2) {
    if (t1 == NULL){
        return t2;
    }else if (t2 == NULL){
        return t1;
    }
    t1->val = t1->val + t2->val;

    //左子树的操作
    if (t1->left == NULL){
        t1->left = t2->left;
    }else if (t2->left == NULL){

    }else{
        mergeTrees(t1->left, t2->left);
    }

    //右子树的操作
    if (t1->right == NULL){
        t1->right = t2->right;
    }else if (t2->right == NULL){

    }else {
        mergeTrees(t1->right, t2->right);
    }
    return t1;
}
