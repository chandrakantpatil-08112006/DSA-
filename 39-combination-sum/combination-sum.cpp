class Solution {
public:
    set<vector<int>> s;

    void getAllCombinations(vector<int>& arr, int idx, int tar,
                            vector<vector<int>>& ans, vector<int>& combin) {

        if (idx == arr.size() || tar < 0) {
            return;
        }

        if (tar == 0) {
            if (s.find(combin) == s.end()) {
                ans.push_back(combin);
                s.insert(combin);
            }
            return;
        }

        //there are total three case either you include the current element once, multiple time or exclude it

        // Include current element
        combin.push_back(arr[idx]);

        // Use current element only once
        getAllCombinations(arr, idx + 1, tar - arr[idx], ans, combin);

        // Use current element multiple times
        getAllCombinations(arr, idx, tar - arr[idx], ans, combin);

        combin.pop_back();

        // Exclude current element
        getAllCombinations(arr, idx + 1, tar, ans, combin);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> combin;

        getAllCombinations(candidates, 0, target, ans, combin);

        return ans;
    }
};