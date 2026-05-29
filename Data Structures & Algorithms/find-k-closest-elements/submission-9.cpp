class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int count = 0;
        int current = 0;
        int n = arr.size();
        int l = 0, r = n - 1;
        while (l < r) {
            int p = l + (r - l) / 2;
            if (arr[p] == x) {
                l = p - 1;
                r = p + 1;
                count++;
                break;
            } else if (arr[p] > x) {
                r = p;
            } else {
                l = p + 1;
            }
        }
        l--;
        cout << 'l' << l << 'r' << r;
        while (count < k && l >= 0 && r < n) {
            if (abs(arr[l]-x) < abs(arr[r]-x)) {
                l--;
                count++;
            } else {
                r++;
                count++;
            }
        }
        while (count < k && l >= 0) {
            l--;
            count++;
        }
        while (count < k && r < n) {
            r++;
            count++;
        }
        vector<int> ans;
        for (int i = l + 1; i < r; i++) {
            ans.push_back(arr[i]);
        }
        return ans;
    }
};