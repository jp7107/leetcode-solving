class Solution {
public:
    bool halvesAreAlike(string s) {
        int cnta=0;
        int cntb=0;

        for(int i =0;i<s.length()/2;i++){
          if (s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U') {
            cnta++;
          }
        }
        for(int i=s.length()/2;i<s.length();i++){
           if (s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='I'||s[i]=='A'||s[i]=='O'||s[i]=='E'||s[i]=='U') {
            cntb++;
          }
        }
          if(cnta==cntb){
            return true;
          }
        
          return false;
        }
    
};