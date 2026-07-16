class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int i = 0, num = 1;

        while (k > 0) {
            if (i < arr.size() && arr[i] == num) {
                i++;  // number exists
            } else {
                k--;  // missing number
                if (k == 0) return num;
            }
            num++;
        }

        return num;
    }
};
/*
arr = [2,3,4,7,11], k = 5
low = 0, high = 4
mid = 2 → arr[2] = 4 → missing = 1 → k > 1 → low = 3
mid = 3 → arr[3] = 7 → missing = 3 → k > 3 → low = 4
mid = 4 → arr[4] = 11 → missing = 6 → k ≤ 6 → high = 3
Loop ends (low = 4, high = 3)
Answer = low + k = 4 + 5 = 9
*/