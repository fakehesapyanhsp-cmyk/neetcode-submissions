class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        int n = people.size();
        int l = 0, r = n-1;
        int ans = 0;
        while (l < r) {
            if (l + r < limit) {
                l++;
            }
            ans++;
            r--;
        }
        return ans;
    }
};