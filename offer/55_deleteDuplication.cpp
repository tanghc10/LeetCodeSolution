/*
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) :
        val(x), next(NULL) {
    }
};
*/
class Solution {
public:
    ListNode* deleteDuplication(ListNode* pHead)
    {
    	if (pHead == NULL || pHead->next == NULL)
    		return NULL;
    	ListNode* pPre = pHead;
    	ListNode* pCur = pHead;
    	ListNode* pNext = pHead->next;
    	while(pNext != NULL){
    		if(pCur->val == pNext->val){
    			while(pCur->val == pNext->val){
    				pCur->next = pNext->next;
    				delete pNext;
    				pNext = pCur->next;
    				if (pNext == NULL)
    					break;
    			}
    			if (pPre == pCur){
    				pPre = pCur->next;
    				pHead = pPre;
    			}
    			else 
    				pPre->next = pCur->next;
    			delete pCur;
    			if (pPre == NULL)
    				break;
    			pCur = pPre->next;
    			if (pCur == NULL)
    				return pHead;
    			pNext = pCur->next;
    		}else{
    			pPre = pCur;
    			pCur = pCur->next;
    			pNext = pNext->next;
    		}
    	}
    	return pHead;
    }
};