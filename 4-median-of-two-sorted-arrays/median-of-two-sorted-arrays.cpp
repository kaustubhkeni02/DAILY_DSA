class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        double median = 0.0;

        nums1.insert(nums1.end(), nums2.begin(), nums2.end());

        sort(nums1.begin(), nums1.end());

        int mid = nums1.size() / 2;

        if (nums1.size() % 2 == 0) {

            median = (nums1[mid] + nums1[mid - 1]) / 2.0;

        }

        else {
            median = nums1[mid];
        }

        return median;
    }
};