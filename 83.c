/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode* pre=head;
    if(head==NULL) return NULL;
    struct ListNode* now=head->next;
    while(now){
        if(now->val==pre->val){
            struct ListNode* takeaway=now;
            now=now->next;
            pre->next=now;
            free(takeaway);

        }
        else{
            pre=now;
            now=now->next;
        }

    }
    return head;
}