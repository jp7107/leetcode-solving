class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

        int n = digits.size();
        int i = n - 1;     // start from the last digit (rightmost)
        int carry = 1;     // because we want to add +1

        // Loop runs while carry exists AND index is valid
        while (i >= 0 && carry > 0) {

            int sum = digits[i] + carry;   // add carry to current digit

            digits[i] = sum % 10;          // new digit after addition (0-9)
            carry = sum / 10;              // if sum was >=10, carry becomes 1 else 0

            i--;                           // move to the next left digit
        }

        // If still carry is left (e.g., 999 + 1 = 1000)
        if (carry > 0) {
            digits.insert(digits.begin(), 1);  
            // Inserts 1 at the start of vector → becomes like [1,0,0,0]
        }

        return digits;   // return final updated vector
    }
};