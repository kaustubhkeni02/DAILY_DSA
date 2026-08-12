class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m;
        int j = 0;

        // while (i<m) {
        //     if(nums1[i]!=0){
        //         i++;
        //     }
        // }

        while (j < n) {
            nums1[i] = nums2[j];
            i++;
            j++;
        }

        sort(nums1.begin(),nums1.end());
    }
};