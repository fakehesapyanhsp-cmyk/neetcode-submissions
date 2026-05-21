class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i = 0; i < 9; i++) {
            unordered_set<int> seen;
            for (int j = 0; j < 9; j++) {
                int val = board[i][j];
                if (val == '.') {
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
                if (val == '.') {
                    continue;
                }
                if (seen.count(val)) {
                    return false;
                }
                seen.insert(val);
            }
        }
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                unordered_set<int> seen;
                for (int x = i * 3; x < i * 3 + 3; x++) {
                    
                    for (int y = j * 3; y < j * 3 + 3; y++) {
                        int val = board[x][y];
                        if (val == '.') {
                            continue;
                        }
                        if (seen.count(val)) {
                            return false;
                        }
                        seen.insert(val);
                    }
                }
            } 
        }
        return true;
    }
};
