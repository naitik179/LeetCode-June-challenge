class Solution {
public:
   
    vector<vector<int>> reconstructQueue(vector<vector<int>>& p) {
       
        sort(p.begin() , p.end() , [](const vector<int>&a , vector<int>&b){
            return a[0] > b[0] || (a[0] == b[0] && a[1] < b[1]);
        });
        
        for(int i=0;i<p.size();i++){
            auto g = p[i];
            if (g[1] != i) {
                p.erase(p.begin() + i);
                p.insert(p.begin() + g[1], g);
            }
        }
        return p;
    }
};