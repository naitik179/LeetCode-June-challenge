class Solution {
public:
    
    int twoCitySchedCost(vector<vector<int>>& costs) {
       
        int ans = 0;
        for(int i=0;i<costs.size();i++){
            ans += costs[i][0];
        }
        
        vector<int>refund;
        
        for(int i=0;i<costs.size();i++){
            refund.push_back(costs[i][1] - costs[i][0]);
        }
        
        sort(refund.begin() , refund.end());
        for(int i=0;i<costs.size()/2 ; i++){
            ans += refund[i];
        }
        
        return ans;
    }
};