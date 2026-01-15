/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* head = NULL;  
    struct ListNode* tail = NULL;  
    struct ListNode* p1 = l1, *p2 = l2;
    int carry = 0;  // 进位

    while (p1 != NULL || p2 != NULL || carry != 0) {
        int val1 = (p1 != NULL) ? p1->val : 0;
        int val2 = (p2 != NULL) ? p2->val : 0;
        
        int sum = val1 + val2 + carry;
        int current_val = sum % 10;
        carry = sum / 10;

        struct ListNode* new_node = (struct ListNode*)malloc(sizeof(struct ListNode));
        new_node->val = current_val;
        new_node->next = NULL;

        if (head == NULL) {
            head = new_node;
            tail = new_node;
        } else {
            tail->next = new_node;
            tail = new_node;
        }

        if (p1 != NULL) p1 = p1->next;
        if (p2 != NULL) p2 = p2->next;
    }

    return head;
}