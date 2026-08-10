class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {

        int sum = 0;
        vector<int> v1;

        for (int i = 0; i < accounts.size(); i++) {
            sum = 0 ;
            for (int j = 0; j < accounts[i].size(); j++) {

                sum = sum + accounts[i][j];
                
            }

            v1.push_back(sum);
        }

        sort(v1.begin(), v1.end(), greater<int>());

        return v1[0];
    }
};