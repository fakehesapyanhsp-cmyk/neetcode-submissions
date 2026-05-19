class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int l = 0, r = nums.size();
        while (l < r) {
            if (nums[l] == val) {
                swap(nums[l], nums[--r]);
            }
            l++;
        }
        return l;
    }
};