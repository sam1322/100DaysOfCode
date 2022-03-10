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
    int Size(ListNode* l){
        int c =0 ;
        while(l){
            c++; 
            l = l->next; 
        }
        return c ; 
    }
    
//     int helper(ListNode* l1 ,ListNode* l2 ,int s1, int s2){// s1 >= s2 ;
//         if(!l1 || !l2)return 0 ;  // This is for correct order of the numbers
        
//         int c , sum = 0;
        
//         if(s1!=s2){
//             c = helper(l1->next, l2,s1 - 1 , s2 ) ; 
//             sum = l1->val +  c ;
//         }
//         else{
//             c = helper(l1->next, l2->next,s1 - 1 , s2 - 1) ; 
//             sum = l1->val + l2->val + c ;
//         }
 
//         l1->val = sum % 10;          
//         return sum/10 ; 
//     }
    
//     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//         int c=0,s1 = Size(l1);
//         int s2 = Size(l2);
//         ListNode* res = NULL ;
//         if(s1>s2){
//             c= helper(l1,l2,s1,s2);
//             res = l1;
//         }
//         else{
//             c=helper(l2,l1,s2,s1);
//             res = l2;
//         }
//         if(c){
//             ListNode* newNode = new ListNode(c);
//             newNode->next = res ;
//             res = newNode ;
//         }
//         return res ;
        
    // }
    
//     this function is for reverse order of number unlike the above function
    
    ListNode* helper(ListNode* l1 ,ListNode *l2 ,int carryover){
        ListNode* res = NULL ; 
        int sum = 0 ;
        if(!l1 && !l2) {
            if(carryover){
               res = new ListNode(carryover) ;  
            }
        }
        else if(!l1){
            sum = l2->val + carryover ;
            l2->val = sum % 10 ; 
            if(sum/10 ){
                l2->next = helper(l1,l2->next,sum/10);
            }
            res =l2 ;
        }
        else if(!l2){
            sum = l1->val + carryover ;
            l1->val = sum % 10 ; 
            if(sum/10 ){
                l1->next = helper(l1->next,l2,sum/10);
            }
            res = l1 ;
        }
        else{
            sum = l1->val + l2->val + carryover ;
            l2->val = sum % 10 ; 
            
            l2->next = helper(l1->next,l2->next,sum/10);
            
            res =l2 ;
        }
        return res ; 
    }
    
    ListNode* addTwoNumbers(ListNode* l1 ,ListNode* l2){
        
        return helper(l1,l2,0);
        
    }
};