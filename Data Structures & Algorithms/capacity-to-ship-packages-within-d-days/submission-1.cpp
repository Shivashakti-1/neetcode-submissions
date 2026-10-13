class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(), weights.end());
        int high= 0;

        for(int w : weights)
        {
            high+=w;
        }
        int ans=high;

        while(low<=high)
        {
            int mid = low + (high-low)/2;

            int daysneed=1;
            int currentweight=0;

            for(int w : weights)
            {
                if(currentweight+w > mid)
                {
                    daysneed++;
                    currentweight=0;
                }
                currentweight+=w;
            }

            if(daysneed<=days)
            {
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }

        return ans;
        
    }
};