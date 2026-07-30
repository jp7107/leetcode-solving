class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int maxi= 0;//we can use INT_MIN instead of 0 for managing neagative number 
        
        for(int i=0; i<n; i++){
            int cnt = 0;
            unordered_map<char, int > hakla;

            for(int j=i; j<n; j++){
                //store inside hakla map
                hakla[s[j]]++;
                //check the condition
                if(hakla[s[j]] > 1)
                break;

                cnt++;
                maxi= max(maxi, cnt);
            }


        }
        return maxi;
    }  
};