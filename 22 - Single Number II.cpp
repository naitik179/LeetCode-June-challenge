class Solution {
public:
    int singleNumber(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        unordered_map<int , int>m;
        int ans;
        for(int x : nums){
            m[x]++;
        }
        
        for(auto it= m.begin() ; it!=m.end(); it++){
            if(it->second == 1){
                ans = it->first;
                break;
            }
        }
        
        return ans;
    }
};
