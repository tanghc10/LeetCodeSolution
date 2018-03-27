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
    ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
    	if (pListHead == NULL)
    		return NULL;
    	// cal the length of the list
    	int length = 0;
    	ListNode* pTemp = pListHead;
    	while(pTemp != NULL){
    		length++;
    		pTemp = pTemp->next;
    	}
    	if (length < k)
    		return NULL;

    	ListNode* pPre = pListHead;
    	pTemp = pListHead;
    	for(int i = 0; i < k; i++)
    		pPre = pPre->next;
    	while(pPre != NULL){
    		pTemp = pTemp->next;
    		pPre = pPre->next;
    	}
    	return pTemp;
    }
};