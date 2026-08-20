class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> v1;
        vector<int> v2;

        v1.push_back(nums[0]);
        v2.push_back(nums[1]);

        int i = 0;
        int j = 0;
        int k = 2;

        while(k<nums.size()){
            if(v1[i]>v2[j]){
                v1.push_back(nums[k]);
                i++;
                k++;
            }

            else{
                v2.push_back(nums[k]);;
                j++;
                k++;
            }
        }

        v1.insert(v1.end(),v2.begin(),v2.end());

        return v1;



    }



};