class Solution {
public:
    void merge(vector<int>& nums, int low, int mid, int high) {
        int left = low;
        int right = mid + 1;
        vector<int> v;

        while (left <= mid && right <= high) {
            if (nums[left] < nums[right]) {
                v.push_back(nums[left]);
                left++;
            }

            else {
                v.push_back(nums[right]);
                right++;
            }
        }

        while (left <= mid) {
            v.push_back(nums[left]);
            left++;
        }

        while (right <= high) {
            v.push_back(nums[right]);
            right++;
        }

        for (int i = low; i <= high; i++) {
            nums[i] = v[i - low];
        }
    }

    void merge_sort(vector<int>& nums, int low, int high) {

        if (low >= high) {
            return;
        }

        int mid = (low + high) / 2;

        merge_sort(nums, low, mid);
        merge_sort(nums, mid + 1, high);
        merge(nums, low, mid, high);
    }
    vector<int> sortArray(vector<int>& nums) {
        int low = 0;
        int high = nums.size() - 1;
        merge_sort(nums, low, high);

        return nums;
    }
};

// using quick sort (but its worst case scenario is O(n^2) which causes tle)
// int Pindex(vector<int> &nums ,  int low , int high){
//     int pivot = nums[low];
//     int i = low;
//     int j = high;

//     while(i<j){
//         while(nums[i] <= pivot && i<=high-1){
//             i++;
//         }

//         while(nums[j] > pivot && j>=low+1){
//             j--;
//         }

//         if(i<j){
//             swap(nums[i] , nums[j]);
//         }
//     }

//     swap(nums[j] , nums[low]);

//     return j;
// }

// void qs(vector<int>& nums , int low , int high){
//     if(low < high){
//         int PINDEX = Pindex(nums, low , high);
//         qs(nums , low , PINDEX-1);
//         qs(nums ,PINDEX+1 , high);
//     }
// }