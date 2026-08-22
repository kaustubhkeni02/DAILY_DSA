class Solution {
public:
    bool checkDivisibility(int n) {

        int sum = 0;
        int prod = 1;
        int num = n;

        while (num != 0) {
            int temp = num % 10;
            sum = sum + temp;
            prod = prod * temp;
            num = num / 10;
        }

        int total_sum = sum + prod;

        if (n % total_sum == 0) {
            return true;
        }

        else {
            return false;
        }
    }
};