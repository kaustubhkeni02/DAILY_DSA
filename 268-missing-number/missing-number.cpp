class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int n = nums.size();
        int sum = 0 ;
        int sum1 = 0;

        for(int i = 0 ; i <= n ; i++){
            sum = sum + i;

        }

        for(int j = 0 ; j < n ; j++){
            sum1 = sum1 + nums[j];
        }

        return sum-sum1;
        
    }
};