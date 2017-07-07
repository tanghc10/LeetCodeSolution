/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool isSameTree(struct TreeNode* p, struct TreeNode* q) {
    if (p == NULL && q == NULL){
        return true;
    }else if (p == NULL || q == NULL){
        return false;
    }
    if (p->val != q->val){
        return false;
    }
    if (isSameTree(p->left, q->left) == false){
        return false;
    }else if (isSameTree(p->right, q->right) == false){
        return false;
    }
    return true;
}
