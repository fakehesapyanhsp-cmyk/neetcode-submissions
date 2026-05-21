class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int l = 0, i = 0, r = n-1;
        while (i <= r) {
            if (nums[i] == 0) {
                swap(nums[l++], nums[i]);
                i++;
            } else if (nums[i] == 2) {
                swap(nums[r--], nums[i]);
            } else {
                i++;
            }
        }
    }
};