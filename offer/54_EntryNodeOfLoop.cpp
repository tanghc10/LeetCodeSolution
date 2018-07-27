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
    ListNode* EntryNodeOfLoop(ListNode* pHead)
    {
    	ListNode* p1 = pHead;
    	ListNode* p2 = pHead;
    	do{
    		if (p1 == NULL || p2->next == NULL)
    			return NULL;
    		p1 = p1->next;
    		p2 = p2->next->next;
    	}while(p1 != p2);

    	// cal the size of the loop
    	int size = 0;
    	do{
    		if (p1 == NULL)
    			return NULL;
    		p1 = p1->next;
    		size++;
    	}while(p1 != p2);

    	p1 = pHead;
    	p2 = pHead;
    	for(int i = 0; i < size; i++)
    		p1 = p1->next;
    	
    	while(p1 != p2){
    		p1 = p1->next;
    		p2 = p2->next;
    	}
    	return p1;
    }
};