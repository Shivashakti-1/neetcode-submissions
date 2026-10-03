class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> res;

        int num=0;
        for(int i=0;i<digits.size();i++)
        { 
            num*=10;
            num+=digits[i];
        }
        num+=1;
        while(num>0)
        {
            res.push_back(num%10);
            num/=10;
        }
        reverse(res.begin(), res.end());

        return res;
        
    }
};
