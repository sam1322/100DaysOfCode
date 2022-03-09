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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *t, *a = head  , *dummy = new ListNode(-1);
        dummy->next= head ; 
        a = dummy ; 
        while(a->next){
            t = a->next ;
            
            if(t->next && t->val==t->next->val){
                while(t && t->val==a->next->val){
                    t=t->next ; 
                }
                a->next = t ;
            }
            else {
                a =a->next ; 
            }
            
        }
        return dummy->next  ; 
    }
};