class Solution {
public:
    long long maxProduct(vector<int>& nums) {
        long long a = 0, b = 0;

        for (int x : nums) {
            long long num = llabs(x);   // absolute value in long long
            if (num >= a) {
                b = a;
                a = num;
            } 
            else if (num > b) {
                b = num;
            }
        }

        return 100000LL * a * b;
    }
};