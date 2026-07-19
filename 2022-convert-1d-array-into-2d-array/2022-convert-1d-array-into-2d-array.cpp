class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        
        // Step 1: Check validity
        if (m * n != original.size()) {
            return {};
        }

        // Step 2: Create 2D array
        vector<vector<int>> arr2D(m, vector<int>(n));

        // Step 3: Fill using row-major mapping
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                arr2D[i][j] = original[i * n + j];
            }
        }

        return arr2D;
    }
};