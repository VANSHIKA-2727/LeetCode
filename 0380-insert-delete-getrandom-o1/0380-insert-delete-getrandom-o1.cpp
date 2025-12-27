class RandomizedSet {
public:
set<int>s1;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        auto x= s1.find(val);
        if(x==s1.end()){
            s1.insert(val);
            return true;
        }
        return false ;
    }
    
    bool remove(int val) {
        auto x=s1.find(val);
        if(x!=s1.end()){
            s1.erase(val);
            return true;
        }
        return false ;
    }
    
    int getRandom() {
        int k=rand()%s1.size();
        auto x=s1.begin();
        advance(x,k);
        return *x;

        
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */