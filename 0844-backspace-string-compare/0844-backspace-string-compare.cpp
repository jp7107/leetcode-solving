class Solution {
public:
    string fun(string n){
        string ans="";

       for(char ch: n){
            if(ch!='#'){
                ans.push_back(ch);
            }else{
                if(!ans.empty()){
                    ans.pop_back();
                }
            }
        } 

        return ans;
    }

    bool backspaceCompare(string s, string t) {
       
        
       return fun(s) == fun(t);
    }
};