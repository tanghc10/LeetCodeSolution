/*
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};*/
class Solution {
public:
	void ConvertNode(TreeNode* node, TreeNode** nodeList){
		if (node == NULL)
			return;
		if (node->left != NULL)
			ConvertNode(node->left, nodeList);
		node->left = *nodeList;
		if (*nodeList != NULL)
			(*nodeList)->right = node;
		*nodeList = node;
		if (node->right != NULL)
			ConvertNode(node->right, nodeList);
	}
    TreeNode* Convert(TreeNode* pRootOfTree)
    {
    	TreeNode* nodeList = NULL;
        ConvertNode(pRootOfTree, &nodeList);
        while(nodeList != NULL && nodeList->left != NULL)
        	nodeList = nodeList->left;
        return nodeList;
    }
};