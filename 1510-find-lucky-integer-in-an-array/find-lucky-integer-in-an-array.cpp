class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int, int> mpp;
        int count = 0;
        vector<int> v1;

        for (auto it : arr) {
            mpp[it]++;
        }


        int max = *max_element(arr.begin(),arr.end());

        for (int i = 1; i <= max ; i++) {

            if (mpp.count(i) && mpp[i] == i) {
                v1.push_back(i);
            }
        }

        sort(v1.begin(), v1.end(), greater<int>());

        if (v1.size() == 0) {
            return -1;
        }

        else if (v1.size() < 2) {
            return v1[0];
        }

        return v1[0];
    }
};