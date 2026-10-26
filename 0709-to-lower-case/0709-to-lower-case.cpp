#include <string>
class Solution {
public:
    std::string toLowerCase(std::string s) {
        for (int i = 0; i < s.length(); i++) {
            // If the character is uppercase, shift it to lowercase
            if (s[i] >= 'A' && s[i] <= 'Z') {
                s[i] = s[i] + 32; // or s[i] += 32;
            }
        }
        return s;
    }
};
