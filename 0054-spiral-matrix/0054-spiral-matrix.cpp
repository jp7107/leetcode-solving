class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        
        int m = mat.size();
        int n = mat[0].size();
        
        int srow = 0, scol = 0;
        int erow = m - 1, ecol = n - 1;

        vector<int> ans;

        while (srow <= erow && scol <= ecol) {

            // 1. Top row
            for (int j = scol; j <= ecol; j++) {
                ans.push_back(mat[srow][j]);
            }

            // 2. Right column
            for (int i = srow + 1; i <= erow; i++) {
                ans.push_back(mat[i][ecol]);
            }

            // 3. Bottom row (only if more than one row remains)
            if (srow < erow) {
                for (int j = ecol - 1; j >= scol; j--) {
                    ans.push_back(mat[erow][j]);
                }
            }

            // 4. Left column (only if more than one column remains)
            if (scol < ecol) {
                for (int i = erow - 1; i > srow; i--) {
                    ans.push_back(mat[i][scol]);
                }
            }

            // Move boundaries inward
            srow++;
            erow--;
            scol++;
            ecol--;
        }

        return ans;
    }
};