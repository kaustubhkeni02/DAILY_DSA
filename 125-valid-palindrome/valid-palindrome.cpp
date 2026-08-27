class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> result;

        for(char letter : s){
            if(isalnum(letter)){
                result.push_back(tolower(letter));
            }
        }
        vector<char> result1 = result;
        reverse(result.begin(),result.end());

        if(result1==result){
            return true;
        }

        return false;

        
    }
};