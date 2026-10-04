class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        int count = 0;
        int prefix = 0;

        unordered_map<int, int> m;
        m[0] = 1;

        for(int j = 0; j < arr.size(); j++) {
            prefix += arr[j];

            int val = prefix - k;

            if(m.find(val) != m.end()) {
                count += m[val];
            }

            m[prefix]++;
        }

        return count;
    }
};