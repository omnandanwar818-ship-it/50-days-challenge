
class Solution {
public:
    string largestOddNumber(string num) {
        // Traverse from the right end of the string
        for (int i = num.size() - 1; i >= 0; i--) {
            // Check if the current digit is odd
            if ((num[i] - '0') % 2 != 0) {
                // Return the prefix from 0 to i
                return num.substr(0, i + 1);
            }
        }
        // If no odd digit is found, return an empty string
        return "";
    }
};
