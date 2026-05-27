class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        array<int, 26> counter1{0};
        array<int, 26> counter2{0};
        for (auto c : s1) {
            counter1[c-'a']++;
        }   
        int l = 0;
        int n2 = s2.size();
        int n1 = s1.size();
        int matches = 0;
        for (int r = 0; r < n2; r++) {
            int ri = s2[r]-'a';
            if (counter1[ri]-counter2[ri] > 0) {
                counter2[r]++;
                if (counter2[ri] == counter1[ri]) {
                    matches++;
                    if (mathces == n1) {
                        return true;
                    }
                }
            } else {
                while (l <= r) {
                    int li = s2[l] - 'a';
                    if (counter2[li] == counter1[li]) {
                        matches--;
                    }
                    counter2[li]--;
                    l++;
                }
            }
        }
        return false;
    }
};
