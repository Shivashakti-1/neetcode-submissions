class Solution {
public:
    bool validPalindrome(string s) {
        int l=0;
        int r=s.size()-1;

        while(l<r)
        {
            while(l<r && !isalnum(s[l]))
            {
                l++;
            }
            while(l<r && !isalnum(s[r]))
            {
                r--;
            }
            if(s[l]!=s[r])
            {
                if(s[l+1]==s[r])
                {
                    l++;
                }
                else if(s[l]==s[r-1])
                {
                    r--;
                }

                else{
                    return false;
                }
            }
            l++;
            r--;
        }

        return true;
        
    }
};