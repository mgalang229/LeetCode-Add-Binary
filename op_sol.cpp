class Solution {
public:
    string addBinary(string a, string b) {
        string result = "";
        // start iterating from the end of the strings
        int i = a.size() - 1;
        int j = b.size() - 1;
        int carry = 0;
        while (i >= 0 || j >= 0) {
            // iniatialize sum with the value of the carry
            int sum = carry;
            // add the integer value of the character from the string
            if (i >= 0) {
                sum += (a[i--] - '0');
            }
            if (j >= 0) {
                sum += (b[j--] - '0');
            }
            // if sum is greater than one then store 1 in carry
            carry = sum > 1 ? 1 : 0;
            // if the sum if even add '0' to the string, otherwise '1'
            result += to_string(sum % 2);
        }
        // if carry is greater than zero, append the carry to the final string
        if (carry > 0) {
            result += to_string(carry);
        }
        // reverse the string to correct order
        reverse(result.begin(), result.end());
        return result;
    }
};
