class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n = nums.size();

        int maxi = *max_element(nums.begin(), nums.end());
        int mini = *min_element(nums.begin(), nums.end());
        vector<bool> present(maxi - mini + 1, false);

        for (int x : nums) {
            present[x - mini] = true;
        }

        int x = present.size();
        vector<int> ans;

        for (int i = 0; i < x; i++) {
            if (present[i] == false) {
                ans.push_back(mini + i);
            }
        }

        return ans;
    }
};