class Solution {
    int signFunc(int count1, int count2) {
        if (count2 > 0) {
            return 0;
        }

        else if (count1 % 2 != 0) {
            return -1;
        }

        else
            return 1;
    }

public:
    int arraySign(vector<int>& nums) {

        int count1;
        int count2;

        for (auto it : nums) {
            if (it == 0) {
                count2++;
            }

            if (it < 0) {
                count1++;
            }
        }

        return signFunc(count1, count2);
    }
};