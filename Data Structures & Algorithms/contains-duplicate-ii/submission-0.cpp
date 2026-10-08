class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int l=0;
        int r=nums.size()-1;
        while(l<r)
        {
            if(nums[l]==nums[r] && abs(l-r)>k)
            {
                return false;
            }
            l++;
            r--;
        }

        return true;
        
    }
};