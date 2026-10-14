class Solution {
public:
    bool canSplit(vector<int> &nums,int k, int limit)
    {
        int currentsum=0;
        int groups=1;
        for(int num : nums)
        {
            if(currentsum+num>limit)
            {
                groups++;
                currentsum=0;
            }
            currentsum+=num;
        }

        return groups<=k;
    }
    int splitArray(vector<int>& nums, int k) {
        int l=*max_element(nums.begin(), nums.end());
        int h=0;

        for(int n:nums)
        {
            h+=n;
        }

        int ans=h;

        while(l<=h)
        {
            int mid=l+(h-l)/2;

            if(canSplit(nums,k,mid))
            {
                ans=mid;
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return ans;
    }
};