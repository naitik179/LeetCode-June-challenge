class Solution {
public:
    int numSquares(int n) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        vector<int>sq;
        
        for(int i=1;i*i<=n;i++){
            sq.push_back(i*i);
        }
        vector<int>dp (n+1 , INT_MAX);
        dp[0] = 0;
        for(auto coin : sq){
            for(int j=1;j<=n;j++){
                if(j>=coin){
                    dp[j] = min(dp[j] , dp[j - coin] +1);
                }
            }
        }
        
        return dp[n];
    }
};
