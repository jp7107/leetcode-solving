class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set <int> st(nums.begin(), nums.end());

        int Maximum = 0;

        for (int num : st) {

            // start only from beginning of sequence
            if (st.find(num - 1) == st.end()) {

                int current = num;
                int cnt = 1;

                while (st.find(current + 1) != st.end()) {
                    current++;
                    cnt++;
                }

                Maximum = max(Maximum, cnt);
            }
        }

        return Maximum;
    }
};