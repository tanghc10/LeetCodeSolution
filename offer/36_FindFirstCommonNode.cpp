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
    ListNode* FindFirstCommonNode( ListNode* pHead1, ListNode* pHead2) {
    	if (pHead1 == NULL || pHead2 == NULL)
    		return NULL;
    	ListNode* temp1 = pHead1;
    	ListNode* temp2 = pHead2;
        int length1 = 0;
        while(temp1 != NULL){
        	length1++;
        	temp1 = temp1->next;
        }
        int length2 = 0;
        while(temp2 != NULL){
        	length2++;
        	temp2 = temp2->next;
        }
        temp1 = pHead1;
        temp2 = pHead2;
        while (length1 > length2){
        	temp1 = temp1->next;
        	length1--;
        }
        while (length2 > length1){
        	temp2 = temp2->next;
        	length2--;
        }
        while(temp1 != NULL && temp2 != NULL){
        	if (temp1 == temp2){
        		return temp1;
        	}
        	temp1 = temp1->next;
        	temp2 = temp2->next;
        }
        return NULL;
    }
};