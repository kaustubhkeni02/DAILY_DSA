class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_water = 0;
        int i = 0;
        int j = height.size() - 1;

        while(i<j){
            int width = j - i;
            int current_height = min(height[i] , height[j]);

            max_water = max(max_water , current_height*width);

            if(height[i] < height[j]){
                i++;
            }

            else{
                j--;
            }
        }

        return max_water;
    }
};