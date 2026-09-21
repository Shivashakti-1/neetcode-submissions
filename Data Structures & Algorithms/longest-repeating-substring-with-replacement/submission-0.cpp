class Solution {
public:
    int characterReplacement(string s, int k) {
      vector<int> freq(26,0);

      int maxfreq=0;
      int longest=0;
      int l=0;

      for(int r=0;r<s.size();r++)
      {
        freq[s[r]-'A']++;
        maxfreq = max(maxfreq, freq[s[r]-'A']);
        int changes = (r-l+1)-maxfreq;

        while(changes>k)
        {
            freq[s[l]-'A']++;
            l++;
            changes = (r-l+1)-maxfreq;
        }
        longest = max(r-l+1, longest);
      }
      return longest;
    }
};
