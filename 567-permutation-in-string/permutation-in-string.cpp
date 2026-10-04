class Solution {
public:
    bool isFreqSame(int freq1[], int freq2[]) {
        for (int i = 0; i < 26; i++) {
            if (freq1[i] != freq2[i]) {
                return false;
            }
        }
        return true;
    }

    bool checkInclusion(string s1, string s2) {
        int n = s1.length();
        int m = s2.length();

        if (n > m) {
            return false;
        }

        int freq1[26] = {0};
        int freq2[26] = {0};

        // Frequency of s1
        for (char ch : s1) {
            freq1[ch - 'a']++;
        }

        // First window
        for (int i = 0; i < n; i++) {
            freq2[s2[i] - 'a']++;
        }

        if (isFreqSame(freq1, freq2)) {
            return true;
        }

        // Sliding window
        for (int i = n; i < m; i++) {

            // Add new character
            freq2[s2[i] - 'a']++;

            // Remove old character
            freq2[s2[i - n] - 'a']--;

            if (isFreqSame(freq1, freq2)) {
                return true;
            }
        }

        return false;
    }
};