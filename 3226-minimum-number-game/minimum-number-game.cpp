class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        int x = 0;

        sort(nums.begin(), nums.end());

        while (x < nums.size()) {
            reverse(nums.begin() + x, nums.begin() + x + 2);
            x += 2;
        }

        return nums;
    }
};