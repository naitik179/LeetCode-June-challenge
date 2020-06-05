class Solution {
public:
    vector<int>v;
    Solution(vector<int>& w) {
        
       int sum=0;
        for(int i=0;i<w.size();i++){
            sum+=w[i];
            v.push_back(sum);
        }
        
    }
    
    int pickIndex() {
        
        int val = rand() % v.back();
        return upper_bound(v.begin() , v.end() , val) - v.begin();
        
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(w);
 * int param_1 = obj->pickIndex();
 */
