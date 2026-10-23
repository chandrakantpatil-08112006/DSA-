class Solution {
public:
    string intToRoman(int num) {
        string ans = "";
        int dig;

        // thousands
        dig = num / 1000;
        ans += string(dig, 'M');
        num = num % 1000;

        // hundreds
        dig = num / 100;
        if (dig == 9) ans += "CM";
        else if (dig >= 5) {
            ans += "D";
            ans += string(dig - 5, 'C');
        }
        else if (dig == 4) ans += "CD";
        else ans += string(dig, 'C');
        num = num % 100;

        // tens
        dig = num / 10;
        if (dig == 9) ans += "XC";
        else if (dig >= 5) {
            ans += "L";
            ans += string(dig - 5, 'X');
        }
        else if (dig == 4) ans += "XL";
        else ans += string(dig, 'X');
        num = num % 10;

        // ones
        dig = num;
        if (dig == 9) ans += "IX";
        else if (dig >= 5) {
            ans += "V";
            ans += string(dig - 5, 'I');
        }
        else if (dig == 4) ans += "IV";
        else ans += string(dig, 'I');

        return ans;
    }
};