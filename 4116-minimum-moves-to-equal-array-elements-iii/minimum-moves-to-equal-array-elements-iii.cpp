class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(), nums.end(), greater<int>());
        int moves = 0;
        int num = nums[0];
        for (int i = 1; i < nums.size(); i++) {

            int n = nums[i];
            while (n != num) {
                n += 1;
                moves = moves + 1;
            }

            n = 0;
        }

        return moves;
    }
};

