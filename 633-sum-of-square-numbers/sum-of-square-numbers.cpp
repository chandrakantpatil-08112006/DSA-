class Solution {
public:
    bool judgeSquareSum(int c) {
        long long n = sqrt(c);
        vector<long long> nums;

        for(int i=0;i<=n;i++){
            nums.push_back(i);
        }
        int i=0;
        int j=nums.size()-1;

        while(i<=j){
            long long square = (nums[i]*nums[i])+(nums[j]*nums[j]);
            if(square<c){
                i++;
            }else if(square>c){
                j--;
            }else{
                return true;
            }
        }

        return false;
    }
};