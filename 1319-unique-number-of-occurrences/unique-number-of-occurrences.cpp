class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> mpp;

        for (int i = 0; i < arr.size(); i++) {
            mpp[arr[i]]++;
        }

        vector<int> v;

        for (auto it : mpp) {
            v.push_back(it.second);
        }

        sort(v.begin() , v.end());
        for (int j = 1; j < v.size(); j++) {
            if (v[j] != v[j - 1]) {
                continue;
            }

            else {
                return false;
            }
        }

        return true;
    }
};