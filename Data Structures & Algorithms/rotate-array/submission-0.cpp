class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        rotate(nums.begin(), nums.end());
        rotate(nums.begin(), nums.begin() + k-1);
        rotate(nums.begin() + k, nums.end());
    }
};