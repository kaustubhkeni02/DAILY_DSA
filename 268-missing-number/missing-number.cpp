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

//     int n = nums.size();
//     int sum1 = 0;

//     // for(int i = 0 ; i <= n ; i++){
//     //     sum = sum + i;

//     // }

//     int sum = (n * (n + 1)) / 2;

//     for (int j = 0; j < n; j++) {
//         sum1 = sum1 + nums[j];
//     }

//     return sum - sum1;
// }

//     sort(nums.begin(),nums.end());

// int xor1 = 0 ;
// int xor2 = 0 ;

// int max = *max_element(nums.begin() , nums.end());

// if(nums.size()==1 && nums[0]==1){
//     return 0;
// }

// for(int i = 1 ; i < nums.size() ; i++){

//     xor1 = xor1 ^ nums[i];
//     xor2 = xor2 ^ i;
// }

// xor2 = xor2 ^ max;

// int ans = xor1 ^ xor2;

// if(ans==max){
//     return ans + 1;
// }

// return ans;