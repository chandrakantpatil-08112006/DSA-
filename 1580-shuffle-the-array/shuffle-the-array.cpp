class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int m = nums.size();
        vector<int> ans;
        int i = 0;
        
        while(i<m/2){
            int j = i+n;
            ans.push_back(nums[i]);
            ans.push_back(nums[j]);
            
            i++;
        }
        return ans;
    }
};