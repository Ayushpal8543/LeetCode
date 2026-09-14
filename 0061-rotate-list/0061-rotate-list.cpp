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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head->next == NULL) {
           return head;
        }
        int n = 0;
        ListNode* temp = head;
        while(temp != NULL) {
            n++;
            temp = temp->next;
        }
        k = k % n;
        if(k == 0) {
            return head;
        }
        int pos = n - k;
        ListNode* prev = head;
        for(int i = 1; i < pos; i++) {
            prev = prev->next;
        }
        ListNode* newHead = prev->next;
        ListNode* curr = newHead;
        while(curr->next != NULL) {
            curr = curr->next;
        }
        curr->next = head;
        prev->next = NULL;
        return newHead;
      
    }
};