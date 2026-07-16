class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();

        int ansStart = 0;
        int ansLen = 1;

        for (int i = 0; i < n; i++) {

            // Odd length palindrome
            int left = i;
            int right = i;

            while (left >= 0 && right < n && s[left] == s[right]) {
                if (right - left + 1 > ansLen) {
                    ansLen = right - left + 1;
                    ansStart = left;
                }
                left--;
                right++;
            }

            // Even length palindrome
            left = i;
            right = i + 1;

            while (left >= 0 && right < n && s[left] == s[right]) {
                if (right - left + 1 > ansLen) {
                    ansLen = right - left + 1;
                    ansStart = left;
                }
                left--;
                right++;
            }
        }

        return s.substr(ansStart, ansLen);
    }
};