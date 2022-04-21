class MyHashSet {
public:
    vector<int> v;
    MyHashSet() {
        int k = 1000000/32 ;
        v.assign(k+1,0) ; 
    }
    
    void add(int key) {
        v[key/32] |=  1<<(key%32);
    }
    
    void remove(int key) {
        v[key/32] &= ~(1<<(key%32));
    }
    
    bool contains(int key) {
        return v[key/32] & (1<<(key%32)); 
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */