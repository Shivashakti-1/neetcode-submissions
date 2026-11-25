class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       if (strs.empty()) {
        return "";
    }

    string p = strs[0];

    for (string s : strs) {
        int i = 0;

        while (i < p.size() && i < s.size() && p[i] == s[i]) {
            i++;
        }

        p.erase(i);

        if (p.empty()) {
            return "";
        }
    }

    return p;
        
    }
};