class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l=0;
        int sum=0;
        int res=INT_MAX;
        for(int r=0;r<nums.size();r++)
        {
            sum+=nums[r];
            while(sum>=target)
            {
                res=min(res, r-l+1);
                sum-=nums[l];
                l++;                
            }
        }
        if(res==INT_MAX)
        {
            return 0;
        }
        return res;
        
    }
};