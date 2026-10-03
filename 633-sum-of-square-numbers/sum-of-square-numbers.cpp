class Solution {
public:
    bool judgeSquareSum(int c) {
        long long n = sqrt(c);
        long long j = n;

        for (int i = 0; i <= n; i++) {

            long long sq = (i * i) + (j * j);
            if (sq < c) {
                continue;
            } else if (sq > c) {
                j--;
            } else {
                return true;
            }
        }

        return false;
    }
};