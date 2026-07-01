class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {

        int n = matrix.size();

        // ----------------------------
        // Step 1 : Transpose the matrix
        // ----------------------------
        //
        // Original
        // 1 2 3
        // 4 5 6
        // 7 8 9
        //
        // After transpose
        // 1 4 7
        // 2 5 8
        // 3 6 9
        //
        // Swap matrix[i][j] with matrix[j][i]
        // We start j from i so each pair is swapped only once.

        for (int i = 0; i < n; i++) {

            for (int j = i; j < n; j++) {

                swap(matrix[i][j], matrix[j][i]);

                // Example:
                // swap(2,4)
                // swap(3,7)
                // swap(6,8)
            }
        }

        // ----------------------------------
        // Step 2 : Reverse every row
        // ----------------------------------
        //
        // Before
        // 1 4 7
        // 2 5 8
        // 3 6 9
        //
        // After reversing each row
        // 7 4 1
        // 8 5 2
        // 9 6 3

        for (int i = 0; i < n; i++) {

            reverse(matrix[i].begin(), matrix[i].end());

            // Row examples:
            // [1 4 7] -> [7 4 1]
            // [2 5 8] -> [8 5 2]
            // [3 6 9] -> [9 6 3]
        }
    }
};