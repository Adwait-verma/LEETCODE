#include <string>

class Solution {
public:
    std::string countAndSay(int n) {
        std::string current = "1";
        
        for (int i = 2; i <= n; ++i) {
            std::string next_str = "";
            int len = current.length();
            
            for (int j = 0; j < len; ) {
                int count = 1;
                // Count contiguous duplicate characters
                while (j + 1 < len && current[j] == current[j + 1]) {
                    count++;
                    j++;
                }
                // Append frequency and character
                next_str += std::to_string(count) + current[j];
                j++; // Advance to the start of the next group
            }
            current = std::move(next_str);
        }
        
        return current;
    }
};