class RandomizedSet {
public:
    /** Initialize your data structure here. */
    vector<int>v;
    unordered_map<int , int>m;
    RandomizedSet() {
        
    }
    
    /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
    bool insert(int val) {
        if(m.count(val) > 0){
            return false;
        }
        v.push_back(val);
        m[val] = v.size()-1;
        return true;
    }
    
    /** Removes a value from the set. Returns true if the set contained the specified element. */
    bool remove(int val) {
        if(m.find(val) == m.end()){
            return false;
        }
        int index = m[val];
        int lastindex = v.size()-1;
        int lastelement = v[lastindex];
        swap(v[index] , v[lastindex]);
        m[lastelement] = index;
        m.erase(val);
        v.pop_back();
        
        return true;
    }
    
    /** Get a random element from the set. */
    int getRandom() {
        return v[rand()%v.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
