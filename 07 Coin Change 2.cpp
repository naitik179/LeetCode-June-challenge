class Solution {
public:
    int change(int amount, vector<int>& coins) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        int dp[coins.size()+1][amount+1];
        
        for(int i=0;i<=coins.size();i++)
        {
            dp[i][0] = 1;
        }
        
        for(int i=1;i<=amount;i++){
            dp[0][i] = 0;
        }
        
        for(int i=1;i<=coins.size();i++){
            for(int j=1;j<=amount;j++){
                if(j < coins[i-1]){
                    dp[i][j] = dp[i-1][j];
                }
                else{
                    dp[i][j] = dp[i-1][j] + dp[i][j - coins[i-1]];
                }
            }
        }
        
        return dp[coins.size()][amount];
    }
};
