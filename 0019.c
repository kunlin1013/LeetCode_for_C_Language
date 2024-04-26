/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode first;
    first.next = head;
    struct ListNode *fast = &first;
    struct ListNode *slow = &first;

    for (int i=0; i<n; i++)
        fast = fast->next;
    
    while (fast->next != NULL) {
        fast = fast->next;
        slow = slow->next;
    }

    struct ListNode *temp = slow->next;
    if (slow->next->next != NULL)
        slow->next = slow->next->next;
    else
        slow->next = NULL;
    free(temp);

    return first.next;
}
