class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i = 0; i < 9; i++) {
            unordered_set<int> seen;
            for (int j = 0; j < 9; j++) {
                int val = board[i][j];
                if (val == ".") {
                    continue;
                }
                if (seen.count(val)) {
                    return false;
                }
                seen.insert(val);
            }
        }
        for (int i = 0; i < 9; i++) {
            unordered_set<int> seen;
            for (int j = 0; j < 9; j++) {
                int val = board[j][i];
                if (val == ".") {
                    continue;
                }
                if (seen.count(val)) {
                    return false;
                }
                seen.insert(val);
            }
        }
        return true;
    }
};
