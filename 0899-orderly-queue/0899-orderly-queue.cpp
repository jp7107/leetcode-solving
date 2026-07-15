
class Solution {
public:
    string orderlyQueue(string s, int k) {
    string ans=s;
    int n = s.size();
    if(k==1){
    for (int i = 1; i < n; i++) {
        // rotate
        string temp= s.substr(i) + s.substr(0,i);
        // pick smallest
        ans = min(ans, temp);
    }
      return ans;
    }
     
        sort(s.begin(),s.end());
        return s;
      
    }
};