class Solution { 
public: 
    bool search(vector<int>& nums, int target) { 
        int low = 0; 
        int high = nums.size() - 1; 
        
        while(low <= high){ 
            int mid = low + (high - low) / 2; 
            
            if(nums[mid] == target){ 
                return true; 
            } 
            
            // Handle duplicates: shrink the search space from both ends
            if(nums[low] == nums[mid] && nums[mid] == nums[high]){ 
                low = low + 1; 
                high = high - 1; // Fixed: removed string quotes
                continue; 
            } 
            
            // Case 1: Left half is normally sorted
            if(nums[low] <= nums[mid]){ 
                // Check if target lies within the sorted left half
                if(target >= nums[low] && target < nums[mid]){ 
                    high = mid - 1; 
                } else { 
                    low = mid + 1; 
                } 
            } 
            // Case 2: Right half is normally sorted
            else { 
                // Check if target lies within the sorted right half
                if(target > nums[mid] && target <= nums[high]){ 
                    low = mid + 1; 
                } else { 
                    high = mid - 1; 
                } 
            } 
        } 
        return false; 
    } 
};
