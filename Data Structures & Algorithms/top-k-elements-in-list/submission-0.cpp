class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;

        for(int num : nums)
        {
            mp[num]++;
        }

        vector<pair<int, int>> arr;

        for(auto it : mp)
        {
            arr.push_back({it.first, it.second});
        }

        sort(arr.begin(), arr.end(), [](auto &a, auto &b) {return a.second > b.second;});

          vector<int> result;

        for (int i = 0; i < k; i++) {
            result.push_back(arr[i].first);
        }

        return result;
    }
};
