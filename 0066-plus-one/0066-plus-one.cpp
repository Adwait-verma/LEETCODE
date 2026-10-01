#include <vector>

class Solution {
public:
    std::vector<int> plusOne(std::vector<int>& digits) {
        int n = digits.size();
        
        // Traverse from the least significant digit to the most significant digit
        for (int i = n - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++;
                return digits;
            }
            // If the digit is 9, it becomes 0 and the loop continues to carry the 1
            digits[i] = 0;
        }
        
        // If we reach here, it means all digits were 9 (e.g., 999 -> 1000)
        // The array is currently all 0s. We set the first element to 1 and append a 0.
        digits[0] = 1;
        digits.push_back(0);
        
        return digits;
    }
};