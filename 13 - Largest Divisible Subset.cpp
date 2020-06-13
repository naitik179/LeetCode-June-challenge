class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {        
        int n = nums.size();
        vector<vector<int>> sets(n, vector<int>());
        sort(nums.begin(), nums.end());
        for(int i = 0; i < n; i++) {
            vector<int> subset;
            for(int j = 0; j < i; j++) {
                if(nums[i] % nums[j] == 0 && subset.size() < sets[j].size()) {
                    subset = sets[j];
                }
            }
            sets[i].insert(sets[i].end(), subset.begin(), subset.end());
            sets[i].push_back(nums[i]);
        }
        vector<int> result;
        for(int i = 0; i < n; i++) {
            if (result.size() < sets[i].size()) {
                result = sets[i];
            }
        }
        return result;
    }
};
