class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
    string binary = "";

        for (int i = 0; i < 32; i++) {
            binary += (n % 2) + '0';
            n /= 2;
        }

        uint32_t result = 0;

        for (char c : binary) {
            result = result * 2 + (c - '0');
        }

        return result;
    }
};
