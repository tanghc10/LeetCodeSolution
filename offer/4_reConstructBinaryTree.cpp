/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* reConstructBinaryTree(vector<int> pre,vector<int> vin) {
    	if(pre.size() == 0 || vin.size() == 0)
    		return NULL;

    	int rootVal = pre[0];
    	TreeNode* rootNode = new TreeNode(rootVal);
    	rootNode->left = NULL;
    	rootNode->right = NULL;

    	vector<int> preLeft, preRight;
    	vector<int> vinLeft, vinRight;
    	bool is_left = true;
    	for(int i = 0, j = 1; i < vin.size(); i++){
    		if(vin[i] == rootVal)
    			is_left = false;
    		else{
    			if (is_left == true){
    				preLeft.push_back(pre[j++]);
    				vinLeft.push_back(vin[i]);
    			}else{
    				preRight.push_back(pre[j++]);
    				vinRight.push_back(vin[i]);
    			}
    		}
    	}
    	rootNode->left = reConstructBinaryTree(preLeft, vinLeft);
    	rootNode->right = reConstructBinaryTree(preRight, vinRight);
    	preLeft.clear();
    	preRight.clear();
    	vinLeft.clear();
    	vinRight.clear();
    	return rootNode;
    }
};