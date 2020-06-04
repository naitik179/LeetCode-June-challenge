class Solution {
public:
    void reverseString(vector<char>& s) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        int j = s.size();
        for(int i=0;i<s.size()/2;i++){
            swap(s[i] , s[j-1-i]);
        }
        for(char c : s){
            cout<<c;
        }
    }
};