/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode *first, *current, *previous;
    int carry = 0;
    int i = 0;

    while (l1 != NULL || l2 != NULL || carry == 1){
        current = (struct ListNode *) malloc(sizeof(struct ListNode));
        int v1 = (l1 != NULL) ? l1->val : 0;
        int v2 = (l2 != NULL) ? l2->val : 0;
        int sum = (v1+v2+carry >= 10) ? v1+v2+carry-10 : v1+v2+carry;
        carry = (v1+v2+carry >= 10) ? 1 : 0;

        current->val = sum;
        if (i == 0) {
            first = current;
            i = 1;
        } else
            previous->next = current;
        current->next = NULL;
        previous = current;
        l1 = (l1 != NULL) ? l1->next : NULL;
        l2 = (l2 != NULL) ? l2->next : NULL;
    }
    return first;
}