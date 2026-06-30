
class Solution {
public:
    int strStr(string s1, string s2) {

        int m= s1.length();
        int n =s2.length();
        for(int i=0;i<=m-n; i++){ //s1
            for(int j=0;j<n;j++){//s2
                if (s1[i+j] != s2[j])
                break;
                if(j==n-1)
                return i;
            }
        }
        return -1;
            // return haystack.find(needle);
    }
};