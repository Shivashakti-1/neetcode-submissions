class Solution {
public:
    string multiply(string num1, string num2) {
        int res;
        res=stoi(num1)*stoi(num2);
        return to_string(res);
    }
};
