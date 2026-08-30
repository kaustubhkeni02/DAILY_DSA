#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        if (n <= 2) return n; // Edge case: if size is 1 or 2, we must delete all elements

        int max_no = INT_MIN;
        int min_no = INT_MAX;
        int index_max = 0;
        int index_min = 0;

        // 1. Correctly find the indices of min and max elements
        for (int i = 0; i < n; i++) {
            if (nums[i] > max_no) {
                max_no = nums[i];
                index_max = i;
            }
            if (nums[i] < min_no) {
                min_no = nums[i];
                index_min = i;
            }
        }

        // 2. Identify the smaller and larger index positions
        int left_idx = min(index_min, index_max);
        int right_idx = max(index_min, index_max);

        // 3. Calculate cost for the 3 options
        int opt1 = right_idx + 1;                  // Both from the front (left)
        int opt2 = n - left_idx;                   // Both from the back (right)
        int opt3 = (left_idx + 1) + (n - right_idx); // One from front, one from back

        // Return the minimum of the three choices
        return min({opt1, opt2, opt3});
    }
};

