/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};*/
class Solution {
public:
    ListNode* ReverseList(ListNode* pHead) {
    	if (pHead == NULL || pHead->next == NULL)
    		return pHead;
    	ListNode* pPre = NULL;
    	ListNode* pCur = pHead;
    	ListNode* pNewHead = pCur->next;
    	while(pNewHead != NULL){
    		pCur->next = pPre;
    		pPre = pCur;
    		pCur = pNewHead;
    		pNewHead = pNewHead->next;
    	}
    	pCur->next = pPre;
    	pNewHead = pCur;
    	return pNewHead;
    }
};