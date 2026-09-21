class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> res;
        int count=0;
        for(int i=0;i<=n;i++)
        {  
            string binary="";
            int p=i;
    
           while(p>0)
           {
            binary+=(p%2)+'0';
            p/=2;
           }

           reverse(binary.begin(), binary.end());

           for(char s : binary)
           {
            if(s=='1')
            {
                count++;
            }
           }
           res.push_back(count);
           count=0;
        }
        return res;
    }
};
