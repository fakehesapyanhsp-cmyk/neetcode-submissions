class NumMatrix {
public:
    vector<vector<int>> sumPrefix;
    NumMatrix(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        sumPrefix = vector<vector<int>>(n+1, vector<int>(m+1, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int val = matrix[i][j];
                if (i > 0) {
                    val += matrix[i-1][j];
                }
                if (j > 0) {
                    val += matrix[i][j];
                }
                if (i > 0 && j > 0) {
                    val -= matrix[i-1][j-1];
                }
                sumPrefix[i][j] = val;
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int ans = sumPrefix[row2][col2];
        if (row1 > 0) {
            ans -= sumPrefix[row1-1][col2];
        }
        if (col1 > 0) {
            ans -= sumPrefix[row2][col1-1];
        }
        if (col1 > 0 && row1 > 0) {
            ans += sumPrefix[row1-1][col1-1];
        }
        return ans;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */