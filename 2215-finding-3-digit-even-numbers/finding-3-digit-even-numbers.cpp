class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        int freq[10] = {};

        for(int digit: digits) {
            freq[digit]++;
        }

        vector<int> ans;

        for(int num = 100;num <=999; num++) {

            if(num%2 != 0){
                continue;
            }

            int a = num / 100;
            int b = (num / 10) % 10;
            int c = num % 10;

            freq[a]--;

            if(freq[a] >= 0) {
                freq[b]--;

                if(freq[b] >= 0) {
                    freq[c]--;

                    if(freq[c] >= 0) {
                        ans.push_back(num);
                    }

                    freq[c]++;
                }

                freq[b]++;
            }

            freq[a]++;
        }

        return ans;
    }
};