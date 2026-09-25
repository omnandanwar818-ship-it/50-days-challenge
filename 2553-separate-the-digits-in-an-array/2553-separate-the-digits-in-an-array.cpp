#include <vector>

class Solution {
public:
    std::vector<int> separateDigits(std::vector<int>& nums) {
        std::vector<int> ans;
        for (int num : nums) {
            std::vector<int> temp;
            // Extract digits from right to left
            while (num > 0) {
                temp.push_back(num % 10);
                num /= 10;
            }
            // Append digits in the correct left-to-right order
            while (!temp.empty()) {
                ans.push_back(temp.back());
                temp.pop_back();
            }
        }
        return ans;
    }
};
