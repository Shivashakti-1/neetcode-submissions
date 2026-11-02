class Solution {
public:
    void solve(vector<int> &nums, vector<vector<int>> &ans, vector<int> &curr, vector<bool> &used)
    {
        if(curr.size()==nums.size())
        {
            ans.push_back(curr);
            return;
        }

        for(int i=0;i<nums.size();i++)
        {
            if(used[i])
            {
                continue;
            }

            if(i>0 && nums[i]==nums[i-1] && !used[i-1])
            {
                continue;
            }

            curr.push_back(nums[i]);
            used[i]=true;

            solve(nums,ans,curr,used);
            curr.pop_back();
            used[i]=false;
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> curr;
        vector<bool> used(nums.size(), false);

        solve(nums,ans,curr,used);

        return ans;
        
    }
};