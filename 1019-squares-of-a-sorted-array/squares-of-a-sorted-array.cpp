
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> v1;
        int mul;

        for(auto it : nums){
            mul = it * it;
            v1.push_back(mul);
            mul = 0;
        }

        sort(v1.begin(),v1.end());

        return v1;
        
    }
};