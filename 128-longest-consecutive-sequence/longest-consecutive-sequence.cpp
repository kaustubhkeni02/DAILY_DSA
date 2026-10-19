class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        int currcnt = 0 ;
        int last_smaller = INT_MIN;
        int longest = 1;

        sort(nums.begin() , nums.end());

        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i]-1 == last_smaller){
                last_smaller = nums[i];
                currcnt+=1;
                
            }

            else if(nums[i]==last_smaller){
                continue;
            }

            else if(last_smaller != nums[i]-1){
                currcnt = 1;
                last_smaller = nums[i];
            }

            

            longest = max(longest , currcnt);
        }

        return longest;
    }
};