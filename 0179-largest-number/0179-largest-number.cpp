#include <vector>
#include <string>
#include <algorithm>

class Solution {
public:
    string largestNumber(std::vector<int>& nums) {
        // Convert all integers to strings
        std::vector<std::string> strNums;
        for (int num : nums) {
            strNums.push_back(std::to_string(num));
        }

        // Custom comparator to sort based on concatenated values
        std::sort(strNums.begin(), strNums.end(), [](std::string& a, std::string& b) {
            return a + b > b + a;
        });

        // If the largest number is "0", return "0" (to handle cases like [0, 0])
        if (strNums[0] == "0") {
            return "0";
        }

        // Concatenate the sorted strings
        std::string result;
        for (const std::string& str : strNums) {
            result += str;
        }

        return result;
    }
};
