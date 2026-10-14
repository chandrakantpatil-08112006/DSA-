class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int odd = 1;
        int even = 0;
        int n = nums.size();

        while(even<n && odd<n){
            if(nums[odd] % 2 != 0 && nums[even] % 2 == 0){
                odd+=2;
                even+=2;
            }else if(nums[odd] % 2 == 0 && nums[even] % 2 != 0){
                swap(nums[odd],nums[even]);
                odd+=2;
                even+=2;
            }else if(nums[odd] % 2 == 0 && nums[even] % 2 == 0){
                even+=2;
            }else{
                odd+=2;
            }
            
        }
        return nums;
    }
};