class Solution {
public:
    string triangleType(vector<int>& nums) {

        if(nums[0]+nums[1]<=nums[2] || nums[1]+nums[2]<=nums[0] || nums[0]+nums[2]<=nums[1]){
            return "none";
        }

        set <int> set1;

        set1.insert(nums[0]);
        set1.insert(nums[1]);
        set1.insert(nums[2]);

        if(set1.size()==3){
            return "scalene";
        }

        else if(set1.size()==2){
            return "isosceles";
        }

        else{
            return "equilateral";
        }


        
    }
};