/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* rotateRight(struct ListNode* head, int k) {
    if (!head || !(head->next) || k==0)
        return head;
    struct ListNode *current = head;
    int length = 1;

    while (current->next) {
        current = current->next;
        length++;
    }
    current->next = head;

    k = k % length;
    int stepsToNewHead = length - k;
    struct ListNode *first = head;
    for (int i=0; i<stepsToNewHead-1; i++)
        first = first->next;
    head = first->next;
    first->next = NULL;

    return head;
}