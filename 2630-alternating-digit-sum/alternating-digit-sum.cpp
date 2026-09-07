class Solution {
public:
    int alternateDigitSum(int n) {
        string s = to_string(n);

        int sum = 0;
        int sign = 1;

        for (int i = 0; i < s.length(); i++) {
            int digit = s[i] - '0';
            sum += digit * sign;
            sign = -sign;
        }

        return sum;
    }
};