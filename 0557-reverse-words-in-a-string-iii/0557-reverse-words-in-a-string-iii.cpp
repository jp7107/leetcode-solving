class Solution {
public:
    string reverseWords(string s) {
        string res ="";
        int i=0;
        int j=s.length();


        for(int i=0; i<j; i++){
        string word="";
            
            while (i<j && s[i]!=' '){
                word += s[i];
                i++;
            }
            reverse(word.begin(), word.end());

            res += " " + word;
        }
        
        
        return res.substr(1);
    }
};