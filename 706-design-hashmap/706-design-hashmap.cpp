class MyHashMap {
public:
    vector<pair<int,int>>res;
    MyHashMap() {
        
    }

    void put(int key, int value) {
        remove(key);
        res.push_back({key,value});
    }
    
    int get(int key) {
        for(int i=0;i<res.size();i++){
            if(key==res[i].first)
                return res[i].second;
        }
        return -1;
    }
    
    void remove(int key) {
        if(get(key)!=-1){
            vector<pair<int,int>>::iterator it;
            for(it=res.begin();it!=res.end();it++){
                if(it->first==key){
                    res.erase(it);
                    return;
                }
            }
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