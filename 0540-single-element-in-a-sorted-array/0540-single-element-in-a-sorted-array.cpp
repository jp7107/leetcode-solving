class Solution {
public:
    int singleNonDuplicate(vector<int>& A) {
        int n = A.size();
        if (n == 1) return A[0];

        int st = 0, end = n - 1;

        while (st <= end) {
            int mid = st + (end - st) / 2;

            // Edge checks
            if (mid == 0 && A[0] != A[1]) return A[mid];
            if (mid == n - 1 && A[n - 1] != A[n - 2]) return A[mid];

            // Single element check
            if (A[mid - 1] != A[mid] && A[mid] != A[mid + 1]) return A[mid];

            // Binary search logic
            if (mid % 2 == 0) {
                if (A[mid] == A[mid + 1]) {
                    st = mid + 2; // move right
                } else {
                    end = mid - 1; // move left
                }
            } else {
                if (A[mid] == A[mid - 1]) {
                    st = mid + 1; // move right
                } else {
                    end = mid - 1; // move left
                }
            }
        }
        return -1;
    }
};