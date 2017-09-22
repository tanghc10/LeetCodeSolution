/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
    if (!l1){
        return l2;
    }else if (!l2){
        return l1;
    }
    struct ListNode *result, *linked;
    if (l1->val < l2->val){
        result = linked = l1;
        l1 = l1->next;
    }else{
        result = linked = l2;
        l2 = l2->next;
    }
    while(l1 && l2){
        if (l1->val < l2->val){
            linked->next =l1;
            linked = l1;
            l1 = l1->next;
        }else{
            linked->next = l2;
            linked = l2;
            l2 = l2->next;
        }
    }
    if (!l1){
        linked->next = l2;
    }else{
        linked->next = l1;
    }
    return result;
}