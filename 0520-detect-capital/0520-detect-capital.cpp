class Solution {
public:
    bool allCapital(string word){
        for(int i=0;i<word.size();i++){
            if(!(word[i]>= 'A' && word[i]<= 'Z')){
                return false;
            }
        }
            return true;
    }
    bool allSmall(string word){
        for(int i=0;i<word.size();i++){
            if(!(word[i]>='a' && word[i]<='z')){
                return false;
            }
        }
            return true;
    }

    bool detectCapitalUse(string word) {
       
        if(allCapital(word) || allSmall(word) || allSmall(word.substr(1))){
            return true;
        }
        return false;
    }
};
// class Solution {
// public:
//     bool allCapital(string word){
//         for(int i = 0; i < word.size(); i++){
//             if(!(word[i] >= 'A' && word[i] <= 'Z')){
//                 return false;
//             }
//         }
//         return true;
//     }

//     bool allSmall(string word){
//         for(int i = 0; i < word.size(); i++){
//             if(!(word[i] >= 'a' && word[i] <= 'z')){
//                 return false;
//             }
//         }
//         return true;
//     }

//     bool detectCapitalUse(string word) {
//         // Case 1: All capitals → "USA"
//         // Case 2: All lowercase → "leetcode"
//         // Case 3: First capital, rest lowercase → "Google"

//         if(allCapital(word) || allSmall(word) || allSmall(word.substr(1))){
//             return true;
//         }
//         return false;
//     }
// };