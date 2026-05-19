class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int vote = 0;
        int val = 0;
        for (auto num : nums) {
            if (val != num) {
                if (vote > 0) {
                    vote--;
                } else {
                    vote += 1;
                    val = num;
                }
            } else {
                vote++;
            }
        }
        return val;
    }
};