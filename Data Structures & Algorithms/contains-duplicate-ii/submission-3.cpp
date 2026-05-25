class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();
        int s = min(n, k+1);
        int l = 0;
        unordered_map<int, int> counts;
        for (int r = 0; r < n; r++) {
            counts[nums[r]]++;
            if (r-l > k) {
                counts[nums[l]]--;
                if (counts[nums[l]] == 0) {
                    counts.erase(nums[l]);
                }
                l++;
            }
            if (counts[nums[r]] > 1) {
                return true;
            }
        }
        return false;
    }
};