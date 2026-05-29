class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int count = 0;
        int current = 0;
        int l, r;
        while (l < r) {
            p = l + (r - l) / 2;
            if (arr[p] == x) {
                l = r;
            }
        } 

    }
};