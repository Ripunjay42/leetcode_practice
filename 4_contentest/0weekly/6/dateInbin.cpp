class Solution {
public:
    string convertDateToBinary(string date) 
    {
        string ans = "";
        string part = "";
        for (char c : date) {
            if (c == '-') {
                ans += bin(part);
                ans += "-";
                part = "";
            } else {
                part += c;
            }
        }
        ans += bin(part);  // Add the last part (day)
        return ans;
    }

    string bin(string n) 
    {
        int num = stoi(n);
        string binary = "";
        if (num == 0) return "0";  // Handle zero case
        while (num > 0) {
            binary = to_string(num % 2) + binary;
            num /= 2;
        }
        return binary;
    }
};