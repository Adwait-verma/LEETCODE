class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        unordered_set<int> s(nums.begin(), nums.end());

        int length = 0;
        int longest = 0;

        for (int x : s) {

            if (!s.count(x - 1)) {

                length = 1;
                int curr = x;

                while (s.count(curr + 1)) {
                    length++;
                    curr++;
                }

                longest = max(longest, length);
            }
        }

        return longest;
    }
};