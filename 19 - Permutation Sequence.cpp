class Solution {
public:
    string getPermutation(int n, int k) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        int arr[n];
        for(int i=1;i<=n;i++){
            arr[i-1] = i;
        }
        
        
        do { 
            k--;
            if(k==0){
                break;
            }
        } while (next_permutation(arr, arr + n)); 
        
        string s ="";
        for(int i=1;i<=n;i++){
            s.append(to_string(arr[i-1]));
        }
        
        return s;
    }
};
