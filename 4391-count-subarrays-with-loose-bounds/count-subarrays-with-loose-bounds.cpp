class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long count = 0;
        int n = nums.size();
        long long run = 0;

        for(int i=0;i<n;i++){
            if(nums[i] >= minK && nums[i] <= maxK){
                run++;
                count += run;
            }
            else{
                run = 0;
            }
        }

        return count;
    }
};