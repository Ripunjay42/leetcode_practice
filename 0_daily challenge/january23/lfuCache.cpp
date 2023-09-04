class LFUCache {
public:
    unordered_map<int,int>keyIndex;
    int index = -1 , k = 0 , cap = 0   ;
    unordered_map<int,int>freq;
    unordered_map<int,int>store;
    set<pair<pair<int,int>,int>>s;
    LFUCache(int capacity) {
        cap = capacity ;  
    }
    
    int get(int key) {
        if(store.count(key) == 0) return -1 ; 
        s.erase({{freq[key],keyIndex[key]},key});
        freq[key]++ ; 
        keyIndex[key] = ++index ;
        s.insert({{freq[key],keyIndex[key]},key});
        return store[key] ;
    }
    
    void invalidate(){
        if(s.size() == 0) return ;
        k = cap ;
        auto it = *s.begin();
        int K = it.second ;
        
        store.erase(K); 
        s.erase({{freq[K],keyIndex[K]},K}); 
        freq.erase(K);
        keyIndex.erase(K);
    }

    void put(int key, int value) {
        if(store.count(key) > 0){
            store[key] = value ; 
            s.erase({{freq[key],keyIndex[key]},key});
            freq[key]++ ; 
            keyIndex[key] = ++index ;
            s.insert({{freq[key],keyIndex[key]},key});
            return ;
        }

        k += 1 ; 
        if(k == cap+1) {invalidate(); }
        if(k > cap) return ;
        store[key] = value ; 
        freq[key]++ ; 
        keyIndex[key] = ++index ;
        s.insert({{freq[key],keyIndex[key]},key});
    }
};

/**
 * Your LFUCache object will be instantiated and called as such:
 * LFUCache* obj = new LFUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */