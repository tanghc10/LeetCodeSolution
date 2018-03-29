/*
struct RandomListNode {
    int label;
    struct RandomListNode *next, *random;
    RandomListNode(int x) :
            label(x), next(NULL), random(NULL) {
    }
};
*/
class Solution {
public:
    RandomListNode* Clone(RandomListNode* pHead)
    {
        if (pHead == NULL)
            return NULL;
        RandomListNode* tempOld = pHead;
        RandomListNode* tempNew;
        while(tempOld != NULL){
        	// change the old link A->B->C->D to
        	// A->A'->B->B'->C->C'->D->D'
			tempNew = new RandomListNode(tempOld->label);	
			tempNew->next = tempOld->next;
			tempOld->next = tempNew;
			tempOld = tempNew->next;
        }
        // update the random link
        tempOld = pHead;
        tempNew = pHead->next;
        while(tempOld != NULL){
        	tempNew = tempOld->next;
        	if (tempOld->random != NULL)
        		tempNew->random = tempOld->random->next;
        	tempOld = tempNew->next;
        }
        // break the new link and the old link
        RandomListNode* result = pHead->next;
        tempNew = pHead->next;
        while(tempNew->next != NULL){
        	tempNew->next = tempNew->next->next;
        	tempNew = tempNew->next;
        }
        pHead->next = NULL;
        return result;
    }
};