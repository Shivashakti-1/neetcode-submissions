class Solution {
public:
    string multiply(string num1, string num2) {
        long long res;
        res=stoi(num1)*stoi(num2);
        return to_string(res);
    }
};
