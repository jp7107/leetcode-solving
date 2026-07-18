class Solution {
public:
    bool checkIfPangram(string sentence) {
   unordered_set<char> st;
    
    for(char ch : sentence){
        st.insert(ch);
    }
    
    return st.size() == 26;
    // vector<int> arr(26,0);

    // for(char ch: sentence){
    //     int index= ch-'a';
    //     arr[index]++;
    // }
    // for(int cnt:arr){
    //     if(cnt==0) return false;
    // }
    // return true;

    }   
};