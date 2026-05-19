class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        bool isSwapped = false;
        do {
            isSwapped = false;
            for (int i = 0; i < nums.size()-1; i++) {
                if (nums[i] > nums[i+1]) {
                    swap(nums[i], nums[i+1]);
                    isSwapped = true;
                }
            }
        }
        while (isSwapped);
        return nums;
    }
};