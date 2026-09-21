class Solution {
public:
    bool checkInclusion(string s1, string s2) {
     sort(s1.begin(), s1.end());

     int x=s1.length();
     int y=s2.length();

     for(int r=0;r<y;r++)
     {
        string temp = s2.substr(r,x);
        sort(temp.begin(), temp.end());
        if(temp == s1)
        {
            return true;
        }
     }  
     return false; 
    }
};
