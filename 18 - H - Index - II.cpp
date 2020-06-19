class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n=citations.size();
        int l=0, r=citations.size();
        while(l<r){
            int m=l+(r-l)/2;
            if(citations[m]>=n-m) r=m;
            else l=m+1;
        }
        
        return n-l;
    }
};
