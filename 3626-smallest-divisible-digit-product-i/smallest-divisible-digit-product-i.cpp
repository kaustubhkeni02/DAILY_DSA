class Solution {
public:
    int smallestNumber(int n, int t) {
        int temp;
        int mul = 1;
        int num = 0;
        int multiply;

        do {
            num = n;
            while (num > 0) {
                temp = num % 10;
                mul = mul * temp;
                num = num / 10;
            }

            n = n + 1;
            multiply = mul;
            mul = 1;

        } while (multiply % t != 0);

        return n - 1;
    }
};

// int temp;
// int mul = 1;
// int num = n;
// while (num > 0) {
//     temp = num % 10;
//     mul = mul * temp;
//     num = num / 10;
// }

// if (mul % t != 0) {

// }