#include <string>

class Solution {
private:
    // Helper function to check if a specific substring is a palindrome
    bool isPalindrome(const std::string& s, int left, int right) {
        while (left < right) {
            if (s[left] != s[right]) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }

public:
    bool validPalindrome(std::string s) {
        int left = 0;
        int right = s.length() - 1;

        while (left < right) {
            if (s[left] != s[right]) {
                // If a mismatch is found, check both single-deletion paths
                return isPalindrome(s, left + 1, right) || isPalindrome(s, left, right - 1);
            }
            left++;
            right--;
        }

        // If no mismatches are found, it's already a perfect palindrome
        return true;
    }
};
