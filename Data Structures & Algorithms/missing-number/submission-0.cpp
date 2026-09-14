class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int num = nums.size();
        int sum = num*(num+1)/2;
        int p=0;
        for(int i=0;i<nums.size();i++)
        {
           p+=nums[i];
        }
        p=sum-p;
        return p;
    }
};
