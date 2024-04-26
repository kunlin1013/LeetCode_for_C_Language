/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    struct ListNode *pointerA, *pointerB;
    pointerA = headA;
    pointerB = headB;

    while (pointerA != pointerB) {
        pointerA = pointerA == NULL? headB : pointerA->next;
        pointerB = pointerB == NULL? headA : pointerB->next;
    }
    return pointerB;
}