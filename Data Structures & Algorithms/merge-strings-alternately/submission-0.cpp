class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string p;
        int s1=word1.size();
        int s2=word2.size();
        int l=0,r=0;

        while(l<s1 && r<s2)
        {
            p.push_back(word1[l]);
            p.push_back(word2[r]);
            l++;
            r++;
        }

        while(l<s1)
        {
            p.push_back(word1[l]);
            l++;
        }

        while(r<s2)
        {
            p.push_back(word2[r]);
            r++;
        }

        return p;

        
    }
};