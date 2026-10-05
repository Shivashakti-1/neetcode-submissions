class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty())
        {
            return "";
        }

        string p= strs[0];

        for(string s : strs)
        {   if(s=="")
        {
            return "";
        }
        else{
            int i=0;
            while(i<s.size())
            {
                if(s[i]!=p[i])
                {
                    p.erase(i);
                    break;
                }
                i++;
            }
        }
        }
        return p;
        
    }
};