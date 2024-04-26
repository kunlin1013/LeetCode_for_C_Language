/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {
    struct ListNode first;
    first.next = head;
    
    struct ListNode *previous, *current;
    previous = &first;
    current = head;

    while (current) {
        if (current->val == val) {
            struct ListNode *temp = current;
            previous->next = current->next;
            current = current->next;
            free(temp);
        } else {
            previous = current;
            current = current->next;
        }
    }
    return first.next;
}