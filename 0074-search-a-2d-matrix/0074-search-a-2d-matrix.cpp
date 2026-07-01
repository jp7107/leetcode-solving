class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        // Total number of rows
        int m = matrix.size();
        if (m == 0) return false;   // Edge case: empty matrix

        // Total number of columns
        int n = matrix[0].size();
        if (n == 0) return false;   // Edge case: empty row

        // Binary search over the entire matrix (flattened)
        int left = 0;
        int right = m * n - 1;     // Last index of the virtual 1D array

        while (left <= right) {
            int mid = left + (right - left) / 2;  // Middle index of search space

            // Convert 1D index 'mid' to 2D index:
            // row = mid / number_of_columns
            // col = mid % number_of_columns
            int row = mid / n;
            int col = mid % n;

            int midValue = matrix[row][col];  // Value at the computed 2D position

            if (midValue == target) {
                return true;                 // Target found
            }
            else if (midValue < target) {
                left = mid + 1;              // Search in the right half
            }
            else {
                right = mid - 1;             // Search in the left half
            }
        }

        // Target not found after complete search
        return false;
    }
};