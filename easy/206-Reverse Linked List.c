/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    if (head == NULL || head->next == NULL){
        return head;
    }
    struct ListNode* current = head;
    struct ListNode* next = current->next;
    struct ListNode* target = next;
    while(target->next != NULL){
        target = target->next;
    }
    struct ListNode* tail = target;
    while(next != NULL){
        current->next = target;
        target = current;
        current = next;
        next = current->next;
    }
    current->next = target;
    head->next = NULL;
    return tail;
}
