class Solution {
public:
    int singleNumber(vector<int>& nums) {

        int ans = 0;

        for (auto it : nums) {
            ans = ans ^ it;
        }

        return ans;
    }
};

// int ans = 0;

// for(auto it : nums){
//     ans=ans^it;
// }

//     unordered_map<int,int> freq;
//     int element;

//     for(auto it : nums){
//         freq[it]++;
//     }

//     for(int i = 0 ; i < nums.size() ; i++){
//         if(freq[nums[i]]==1){

//             element = nums[i];
//             break;

//         }
//     }

//     return element;

// int count = 0 ;
// for(int i = 0 ; i < nums.size() ; i++){
//     for(int j = i+1 ; j< nums.size() ; j++){
//         if((nums[i]^nums[j])==0){
//             continue;
//         }

//         else{
//             count = nums[i];
//         }
//     }
// }

// return count;