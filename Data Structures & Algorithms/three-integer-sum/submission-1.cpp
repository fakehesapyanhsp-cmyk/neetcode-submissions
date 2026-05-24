class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for (int i = 0; i < n-2; i++) {
            if (i != 0) {
                while (i < n && nums[i] == nums[i-1]) {
                    i++;
                }
                if (i >= n-2) {
                    break;
                }
            }
            int target = -nums[i];
            int l = i+1, r = n-1;
            while (l < r) {
                int val = nums[l] + nums[r];
                if (val > target) {
                    r--;
                } else if (val < target) {
                    l++;
                } else {
                    ans.push_back({i, l, r});
                    do {
                        l++;
                    }
                    while (l < r && nums[l] == nums[l-1]);
                    do {
                        r--;
                    }
                    while (l < r && nums[r] == nums[r+1]);
                }
            }
        }
        return ans;
    }
};
