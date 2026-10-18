
class Solution {
public:
    char kthCharacter(int k) {
        string s = "a";

        while (s.size() < k) {
            string temp = "";

            for (char ch : s) {
                temp += ch + 1;
            }

            s += temp;
        }

        return s[k - 1];
    }
};
