class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n= nums.size()/3;
        vector<int> res;
        unordered_map<int, int> mp;

        for(int num : nums)
        {
            mp[num]++;
        }

        for(auto it : mp)
        {
            if(it.second > n)
            {
                res.push_back(it.first);
            }
        }

        return res;
        
    }
};