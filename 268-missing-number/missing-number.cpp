class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int n = nums.size();
        int sum1 = 0;

        // for(int i = 0 ; i <= n ; i++){
        //     sum = sum + i;

        // }

        int sum = (n * (n + 1)) / 2;

        for (int j = 0; j < n; j++) {
            sum1 = sum1 + nums[j];
        }

        return sum - sum1;
    }
};