// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         if(s.length() != t.length()){
//             return false;
//         }
//         sort(s.begin() , s.end());
//         sort(t.begin() , t.end());

//         if(s == t){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }
// };



class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }
        
        vector<int> freqOfS(26, 0);
        vector<int> freqOfT(26, 0);

        for (int i = 0; i < s.length(); i++) {
            freqOfS[s[i] - 'a']++;
            freqOfT[t[i] - 'a']++;
        }

        for (int i = 0; i < 26; i++) {
            if (freqOfS[i] != freqOfT[i]) {
                return false;
            }
        }

        return true;

    }
};