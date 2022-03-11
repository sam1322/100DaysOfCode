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
        if(!head)return head ;
        int c = 0 ;
        ListNode* a=head ,*tail = NULL ; 
        
        while(a){
            c++;
            if(!a->next)tail = a ; 
            a = a->next ;
            
        }
        
        k = k%c;
        
        int t = c - k - 1; 
        a = head ; 
        while(a && t ){
            a = a->next ; 
            t--;
        }
        
        tail->next = head ; 
        head = a->next ; 
        a->next = NULL ; 
        
        return head ; 
    }
};