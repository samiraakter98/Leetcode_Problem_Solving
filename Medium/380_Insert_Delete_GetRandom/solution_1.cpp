class RandomizedSet {
    set<int> rnd;

public:
    RandomizedSet() {
    }
    
    bool insert(int val) {
        if(rnd.find(val) == rnd.end())
        {
            rnd.insert(val);
            return true;
        }
        else return false;
    }
    
    bool remove(int val) {
        int count = rnd.erase(val);
        if(count == 0) return false;
        else return true;
    }
    
    int getRandom() {
        int sz = rnd.size();
        int idx = rand() % sz;
        auto it = rnd.begin();
        for(int i=0; i<idx;i++)  
        {
            it++;  
        }
        cout<<endl;
        return *it;
        
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
