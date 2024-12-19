/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {

    struct ListNode dummy;
    struct ListNode* ResTemp = &dummy;
    dummy.next = NULL;

    int carry = 0;
    while(l1!=NULL || l2!=NULL || carry!=0){
        int sum = carry;

        if (l1 != NULL) {
            sum += l1->val;
            l1 = l1->next;
        }
        if (l2 != NULL) {
            sum += l2->val;
            l2 = l2->next;
        }

        struct ListNode* node = (struct ListNode*)malloc(sizeof(struct ListNode));
        node->val = sum % 10;
        node->next = NULL;

        carry = sum / 10;

        ResTemp->next = node;
        ResTemp = ResTemp->next;
    }

    return dummy.next;

}