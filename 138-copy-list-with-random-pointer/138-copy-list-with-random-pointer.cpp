/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        map<Node*,Node*> mp;
        Node *i = head ; 
        for( ; i!=NULL ; i=i->next) 
        {
            Node *newNode= new Node(i->val);
            mp[i] = newNode ;
        }
        
        for( i = head ; i!=NULL ; i=i->next) 
        {
            mp[i]->next = mp[i->next];
            mp[i]->random = mp[i->random];
        }
        return mp[head] ;
    }
};