class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> seen;
        for (auto num : nums) {
           seen.insert(num);
        }
        int ans = 0;
        for (auto num : seen) {
            int count = 1;
            int target = num + 1;
            while (seen.count(target)) {
                count++;
                target++;
            }
            ans = max(ans, count);
        }
        return ans;
    }
};
