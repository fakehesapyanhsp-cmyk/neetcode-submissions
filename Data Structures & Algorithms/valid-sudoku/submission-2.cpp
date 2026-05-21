class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<int> seen;
        for (int j = 0; j < 9; j++) {
            for (int i = 0; i < 9; i++) {
                if (board[j][i] == '.') continue;
                if (seen.count(board[j][i])) {
                    return false;
                }
                seen.insert(board[j][i]);
            }
        }
        seen.clear();
        for (int j = 0; j < 9; j++) {
            for (int i = 0; i < 9; i++) {
                if (board[i][j] == '.') continue;
                if (seen.count(board[i][j])) {
                    return false;
                }
                seen.insert(board[i][j]);
            }
        }
        return true;
    }
};
