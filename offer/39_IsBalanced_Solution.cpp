class Solution {
public:
	bool isBalanced(TreeNode* pRoot, int* deep){
		if (pRoot == NULL){
			*deep = 0;
			return true;
		}
		int left, right;
		if (isBalanced(pRoot->left, &left) && isBalanced(pRoot->right, &right)){
			if (left - right <= 1 && left - right >= -1){
				*deep = (left > right) ? left + 1 : right + 1;
				return true;
			}
		}
		return false;
	}
    bool IsBalanced_Solution(TreeNode* pRoot) {
    	int deep = 0;
    	return isBalanced(pRoot, &deep);
    }
};