class Solution {
public:

    string encode(vector<string>& strs) {
         string encoded = "";
         for(string s : strs)
         {
            encoded+= to_string(s.length())+"#"+s;
         }
         return encoded;
    }

    vector<string> decode(string s) {
        vector<string> result;
        int i=0;
        while(i<s.length())
        {
            int j=i;
            while(s[j] != '#')
            {
                j++;
            }
            int len = stoi(s.substr(i,j-i));

            j++;

            string p = s.substr(j,len);

            result.push_back(p);

            i= j+len;
        }
        return result;
    }
};
