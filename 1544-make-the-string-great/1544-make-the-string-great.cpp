class Solution {
public:
    string makeGood(string s) {
        string result = "";

        for (char ch : s) {
            if (!result.empty() && 
               (result.back() + 32 == ch || result.back() - 32 == ch)) {
                result.pop_back();
            } else {
                result.push_back(ch);
            }
        }

        return result;
        /* ----------using stack--------------*/
        // stack<char> stack;
        // for (char c : s) {
        //     if (!stack.empty() && abs(c - stack.top()) == 32) {
        //         stack.pop();
        //     } else {
        //         stack.push(c);
        //     }
        // }
        
        // string result;
        // while (!stack.empty()) {
        //     result = stack.top() + result;
        //     stack.pop();
        // }
        
        // return result;
    }
};