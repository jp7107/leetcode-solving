class Solution {
public:
    bool rotateString(string s, string goal) {
        int n = s.size();
        
        for(int i=0; i< n; i++){
            if(s != goal){
             s = s.substr(1) + s[0];

            }
            if (goal == s ){
            return true;
            }
        
        }
        return false;
    }
};