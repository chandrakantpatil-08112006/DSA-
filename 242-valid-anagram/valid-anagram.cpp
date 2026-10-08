class Solution {
public:
    bool isAnagram(string s, string t) {
        int freq[26] = {};

        int n = s.length();
        int m = t.length();

        if(m!=n){
            return false;
        }

        for(int i=0;i<n;i++){
            freq[s[i]-'a']++;
            freq[t[i]-'a']--;
        }

        for(int i=0;i<26;i++){
            if(freq[i]!=0){
                return false;
            }
        }

        return true;
        
    }
};