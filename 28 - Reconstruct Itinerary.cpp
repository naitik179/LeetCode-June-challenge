class Solution {
public:
    vector<string> findItinerary(vector<vector<string>>& tickets) {
        
        
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        unordered_map<string , multiset<string>>m;
        vector<string>ans;
        
        for(int i=0;i<tickets.size();i++){
            m[tickets[i][0]].insert(tickets[i][1]);
        }
        
        stack<string>s;
        s.push("JFK");
        
        while(!s.empty()){
            string src = s.top();
            if(m[src].size() == 0){
                ans.push_back(s.top());
                s.pop();
            }
            else{
                auto dst = m[src].begin();
                s.push(*dst);
                m[src].erase(dst);
            }
        }
        
        reverse(ans.begin() , ans.end());
        return ans;
    }
};
