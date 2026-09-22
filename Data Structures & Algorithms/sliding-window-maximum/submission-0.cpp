class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> res;

        for(int i=0;i<nums.size()-k+1;i++)
        {
            int max = *max_element(nums.begin()+i, nums.begin()+i+k);
            res.push_back(max);
        }
        return res;
    }
};
