/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* curr = head;
        ListNode* temp = head;
        ListNode* prev = NULL;
        while(temp!=NULL) {
            if(n) {
                temp = temp->next;
                n--;
                continue;
            }
            temp = temp->next;
            prev = curr;
            curr = curr->next;
        }
        if(curr == head) return curr->next;
        prev->next = curr->next;
        return head;

    }
};
