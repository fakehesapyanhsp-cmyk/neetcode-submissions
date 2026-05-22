class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, vector<int>> prefixSum;
        int prefix=0;
        int ans=0;
        for (int i = 0; i < n; i++) {
            prefix+=nums[i];
            if (prefixSum.count(prefix-k)) {
                ans+=prefixSum[prefix-k].size();
            }
            prefixSum[prefix].push_back(prefix);
        }
        return ans;
    }
};