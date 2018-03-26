/**
*  struct ListNode {
*        int val;
*        struct ListNode *next;
*        ListNode(int x) :
*              val(x), next(NULL) {
*        }
*  };
*/
class Solution {
public:
    vector<int> printListFromTailToHead(ListNode* head) {
        stack<int> intStack;
        ListNode* pList = head;
        while(pList != NULL){
        	intStack.push(pList->val);
        	pList = pList->next;
        }
        int popNum = 0;
        vector<int> intVector;
        while(!intStack.empty()){
        	popNum = intStack.top();
        	intStack.pop();
        	intVector.push_back(popNum);
        }
        return intVector;
    }
};