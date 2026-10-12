class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;
        int mid=low+(high-low)/2;

        while(low<=high)
        {   if(nums[mid]==target)
        {
            return mid;
        }
           else if(nums[mid]<target)
            {
               low=mid+1;
            }
            else if(nums[mid]>target)
            {
                high=mid-1;                
            }
            
            mid=low+(high-low)/2;
        }
        return low;
        
    }
};