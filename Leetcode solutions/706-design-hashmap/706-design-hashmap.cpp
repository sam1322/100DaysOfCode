class Node {
    public:
    int val , key ;
    Node* next;
    Node(){
        val = -1 ;
        key = -1 ;
        next = NULL ;
        
    }
    Node(int key,int val){
        this->key = key ;
        this->val = val ; 
        this->next = NULL ;
    }
};

class MyHashMap {
public:
    vector<Node*> v ;
    MyHashMap() {
        v.assign(10000,NULL); 
    }
    int hashkey(int key){
        return key%v.size() ;
    }
    void put(int key, int value) {
        int ke = hashkey(key) ;
        
        if(v[ke]==NULL){
            v[ke] = new Node();
        }
        Node* prev = find(v[ke],key);
        if(prev->next == NULL){
            prev->next = new Node(key,value);
        }
        else{
            prev->next->val = value; 
        }
        
    }
    
    Node*  find(Node* bucket ,int key){
    
        Node* t = bucket ,*prev = nullptr  ; 
        while(t && t->key != key){
            prev = t ;
            t = t->next ;
        }
        return prev ;
        
    }
    
    int get(int key) {
        int ke = hashkey(key); 
        Node* prev = find(v[ke],key); 
        return (prev==NULL||prev->next==NULL)?-1:prev->next->val;
    }
    
    void remove(int key) {
        int ke = hashkey(key); 
        Node* prev = find(v[ke],key); 
        if(prev && prev->next){
            prev->next = prev->next->next ; 
        }

    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */