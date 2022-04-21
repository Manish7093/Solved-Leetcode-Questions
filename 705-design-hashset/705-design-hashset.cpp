class MyHashSet {
public:vector<int>res;
    MyHashSet() {
        
    }
    
    void add(int key) {
        if(!contains(key))
            res.push_back(key);
    }
    
    void remove(int key) {
        auto it=find(res.begin(),res.end(),key);
        if(it!=res.end())
            res.erase(it);
    }
    
    bool contains(int key) {
        for(int i=0;i<res.size();i++){
            if(key==res[i])
                return true;
        }
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */