class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum1=0;
        int number;
        int sum2=0;
        int temp;

       

        for(int i = 0 ; i<nums.size() ; i++){

            sum1 = sum1 + nums[i];

            number = nums[i];

           if(number>=10){
            while(number>0){
                temp = number % 10;
                sum2 = sum2 + temp;
                number = number / 10;
            }
           }

           else{
            sum2 = sum2 + nums[i];
           }
        
        }

        if(sum1>=sum2){
            return sum1-sum2;
        }

        return sum2-sum1;
        
    }
};