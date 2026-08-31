/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* nodesBetweenCriticalPoints(struct ListNode* head, int* returnSize) {int *r = malloc(2*sizeof(int)), first=-1, prev=-1, min=1000000, pos=1;
    *returnSize=2;

    while(head->next->next) {
        if ((head->val<head->next->val && head->next->val>head->next->next->val) ||
            (head->val>head->next->val && head->next->val<head->next->next->val)) {
            if(first<0) first=pos;
            if(prev>=0 && pos-prev<min) min=pos-prev;
            prev=pos;
        }
        head=head->next;
        pos++;
    }

    if(first==prev) r[0]=r[1]=-1;
    else r[0]=min, r[1]=prev-first;

    return r;
}
    