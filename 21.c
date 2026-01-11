/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode dummy;
    dummy.next = NULL;
    struct ListNode *tail = &dummy;
    
    while (list1 && list2) {
        struct ListNode *new_node = (struct ListNode*)malloc(sizeof(struct ListNode));
        new_node->next = NULL;
        if (list1->val < list2->val) {
            new_node->val = list1->val;
            list1 = list1->next;
        } else {
            new_node->val = list2->val;
            list2 = list2->next;
        }
        tail->next = new_node;
        tail = new_node;
    }
    
    while (list1) {
        struct ListNode *new_node = (struct ListNode*)malloc(sizeof(struct ListNode));
        new_node->val = list1->val;
        new_node->next = NULL;
        tail->next = new_node;
        tail = new_node;
        list1 = list1->next;
    }
    while (list2) {
        struct ListNode *new_node = (struct ListNode*)malloc(sizeof(struct ListNode));
        new_node->val = list2->val;
        new_node->next = NULL;
        tail->next = new_node;
        tail = new_node;
        list2 = list2->next;
    }
    
    return dummy.next;
}