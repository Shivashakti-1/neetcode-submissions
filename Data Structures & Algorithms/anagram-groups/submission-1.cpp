class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;

        for(string s : strs)
        {
            string  k = s;
            sort(k.begin(), k.end());
            mp[k].push_back(s);
        }

        vector<vector<string>> ans;

        for(auto s : mp)
        {
            ans.push_back(s.second);
        }
        return ans;
        
    }
};
