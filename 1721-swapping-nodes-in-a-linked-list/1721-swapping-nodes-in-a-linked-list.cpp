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
    void Swap(ListNode* a,ListNode* b){
        // ListNode* temp ;
        // temp = a->next; 
        int t = a->next->val  ; 
        a->next->val = b->next->val ;
        b->next->val = t ;
        
    }
    
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* a = head , *b , *dummy = new ListNode(-1) ; 
        int n = 0 ; 
        while(a){
            n++;
            a = a->next; 
        }
        
        a = dummy ;
        a->next = head ; 
        int i = 1 ; 
        while(i < k){
            a=a->next ; 
            i++;
        }
        i = 0 ;
        b = dummy ;
        while(i < n-k){
            b = b->next ;
            i++; 
        }
        Swap(a,b);
        return dummy->next ;
    }
};