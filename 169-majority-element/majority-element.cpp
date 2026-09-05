class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt = 0;
        int ele;
        
        for(int i = 0 ; i < nums.size() ; i++){
            if(cnt == 0){
                ele = nums[i];
                cnt = 1;
            }

            else if(nums[i] == ele){
                cnt++;
            }

            else{
                cnt--;
            }
        }

        return ele;

    }
};

        // map<int, int> mpp;
        // int ans;
        // for (int i = 0; i < nums.size(); i++) {
        //     mpp[nums[i]]++;
        // }

        // for (auto it : mpp) {
        //     if (it.second > nums.size() / 2) {
        //         ans = it.first;
        //     }
        // }

        // return ans;