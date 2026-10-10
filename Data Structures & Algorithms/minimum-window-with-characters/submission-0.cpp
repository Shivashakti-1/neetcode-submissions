class Solution {
public:
    string minWindow(string s, string t) {
         if (t.empty() || s.size() < t.size()) {
            return "";
        }

        unordered_map<char, int> need, window;

        for (char c : t) {
            need[c]++;
        }

        int left = 0;
        int have = 0;
        int needCount = need.size();

        int minLen = INT_MAX;
        int start = 0;

        for (int right = 0; right < s.size(); right++) {
            char c = s[right];
            window[c]++;

            if (need.count(c) && window[c] == need[c]) {
                have++;
            }

            while (have == needCount) {
                int len = right - left + 1;

                if (len < minLen) {
                    minLen = len;
                    start = left;
                }

                char leftChar = s[left];
                window[leftChar]--;

                if (need.count(leftChar) &&
                    window[leftChar] < need[leftChar]) {
                    have--;
                }

                left++;
            }
        }

        if (minLen == INT_MAX) {
            return "";
        }

        return s.substr(start, minLen);
        
    }
};
