class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.length();
        for(int i =1; i <= n/2; i++){
            if(n % i == 0) {
                string new1 = "";
                
                for(int j=0; j< n/i; j++){
                    new1 += s.substr(0, i);

                }
                if(new1 == s ){
                    return true;
                }
            }
        }
        return false;
    }
};