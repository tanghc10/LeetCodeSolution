/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    int carry = 0;
    struct ListNode* temp1 = l1;
    struct ListNode* temp2 = l2;
    struct ListNode* last1 = l1;
    while(temp1 && temp2){
        temp1->val += temp2->val + carry;
        carry = 0;
        if (temp1->val >= 10){
            temp1->val -= 10;
            carry = 1;
        }
        last1 = temp1;
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    if (!temp1 && !temp2){
        if (carry){
            struct ListNode *newNode = (struct ListNode *)malloc(sizeof(struct ListNode));
            newNode->val = carry;
            newNode->next = NULL;
            last1->next = newNode;
        }
        return l1;
    }
    if (!temp1){
        last1->next = temp2;
    }
    while(carry){
        if (last1->next == NULL){
            last1->next = (struct ListNode *)malloc(sizeof(struct ListNode));
            last1->next->val = 1;
            last1->next->next = NULL;
            break;
        }
        temp1 = last1->next;
        temp1->val += carry;
        carry = 0;
        if (temp1->val >= 10){
            temp1->val -= 10;
            carry = 1;
        }
        last1 = last1->next;
    }
    return l1;
}