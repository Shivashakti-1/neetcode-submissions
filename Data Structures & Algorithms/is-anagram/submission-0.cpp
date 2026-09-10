class Solution {
public:
    bool isAnagram(string s, string t) {
      if(s.length() != t.length())
        return false;

      map<char, int> mp;

      for(char ch : s){
        mp[ch]++;}

      for(char ch : t){
        mp[ch]--;}

        for(auto it : mp)
        {
            if(it.second!=0)
              return false;
        }
        return true;
           
    }
};
