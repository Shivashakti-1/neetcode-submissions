class Solution {
public:
    int hammingWeight(uint32_t n) {
    string binary = "";
    int count=0;

    while (n > 0) {
      binary += (n % 2) + '0';
      n /= 2;
    }

    reverse(binary.begin(), binary.end());
    for(char s : binary)
    {
        if(s=='1')
        {
            count++;
        }
    }
    return count;
    }
};
