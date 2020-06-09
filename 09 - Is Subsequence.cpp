class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        int i,j;
        for(i=0,j=0;i<s.length(),j<t.length();)
        {
            if(s[i] == t[j]){
                i++;
                j++;
            }
            else{
                j++;
            }
        }
        
        if(i == s.length()){
            return true;
        }
        else{
            return false;
        }
    }
};
