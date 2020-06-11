class Solution {
public:
    void sortColors(vector<int>& a) {
       
        int start =0;
        int end = a.size()-1;
        int j = a.size()-1;
        while(start<=end){
            if(a[end] == 2){
                swap(a[end] , a[j]);
                end--;
                j--;
            }
            else if(a[end] == 0){
                swap(a[start] , a[end]);
                start++;
            }
            else{
                end--;
            }
        }
    }
};
