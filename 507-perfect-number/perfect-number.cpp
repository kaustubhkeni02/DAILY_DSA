class Solution {
public:
    bool checkPerfectNumber(int num) {
        vector<int> v;
        int sum = 0;
        for(int i = 1 ; i <= num/2 ; i++){
            if(num%i==0){
                v.push_back(i);
            }
        }

        if(v.size()==0){
            return false;
        }

        for(int i = 0 ; i < v.size() ; i++){
            sum = sum + v[i];
        }

        if(sum==num){
            return true;
        }

        else{
            return false;
        }
        
    }
};