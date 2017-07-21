#include"stdio.h"
#include"math.h"
typedef struct TreeNode{
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
}TreeNode;

int getMinimumDifference(TreeNode *root);

int main(void){
    TreeNode *root = (TreeNode *)malloc(sizeof(TreeNode));
    root->val = 1;
    root->left = NULL;
    TreeNode *newNode1 = (TreeNode *)malloc(sizeof(TreeNode));
    root->right = newNode1;
    newNode1->val = 5;
    TreeNode *newNode2 = (TreeNode *)malloc(sizeof(TreeNode));
    newNode1->left = newNode2;
    newNode1->right = NULL;
    newNode2->val = 3;
    newNode2->left = NULL;
    newNode2->right = NULL;
    printf("\n result: %d", getMinimumDifference(root));
}
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int result = 65535;
int getMinimumDifference(struct TreeNode* root) {
    struct TreeNode *temp = NULL;
    if (root->left){
        temp = root->left;
        while(temp->right){
            temp = temp->right;
        }
        int left = abs(root->val - temp->val);
        result = (result < left) ? result : left;
        getMinimumDifference(root->left);
    }
    if (root->right){
        temp = root->right;
        while(temp->left){
            temp = temp->left;
        }
        int right = abs(root->val - temp->val);
        result = (result < right) ? result : right;
        getMinimumDifference(root->right);
    }
    return result;
}
