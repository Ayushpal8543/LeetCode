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
    void reverse(ListNode* head,int k){
        ListNode* curr=head;
        ListNode* prev=NULL;
        while(k--){
            ListNode* nex=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nex;
        }
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* left=head;
        ListNode* right=NULL;
        ListNode* res=NULL;
        ListNode* prevleft=NULL;
        while(true){
            right=left;
            for(int i=0;i<k-1;i++){
                if(right==NULL){
                    break;
                }
                right=right->next;
            }
            if(right){
                ListNode* nextleft=right->next;
                reverse(left,k);
                if(prevleft){
                    prevleft->next=right;
                }
                if(res==NULL){
                    res=right;
                }
                prevleft=left;
                left=nextleft;
              
            }
            else{
                if(prevleft){
                    prevleft->next=left;
                }
                if(res==NULL){
                    res=left;
                }
                break;
            }
        }
        return res;
    }
};