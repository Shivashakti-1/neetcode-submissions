class Solution {
public:
    bool validPalindrome(string s) {
        int l=0;
        int r=s.size()-1;
        int count=1;

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
                if(s[l+1]==s[r] && count==1)
                {
                    l++;
                    count=0;
                }
                else if(s[l]==s[r-1] && count==1)
                {
                    r--;
                    count=0;
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