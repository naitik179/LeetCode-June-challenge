class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        auto it = lower_bound(nums.begin() , nums.end() , target);
        
        if(it == nums.end()){
            return nums.size();
        }
        else{
            return it-nums.begin();
        }
    }
};
