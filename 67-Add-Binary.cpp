class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.size() - 1, j = b.size() - 1, sum = 0, carry = 0;
        string res = "";
        while(i >= 0 || j >= 0) {
            sum = carry;
            if (i >= 0) 
            sum += a[i--] - '0';
            if (j >= 0) 
            sum += b[j--] - '0';

            res += to_string(sum % 2);
            carry = sum / 2;
        }

        if (carry != 0) 
        res += to_string(carry);
        reverse(res.begin(), res.end());
        return res;
    }
};