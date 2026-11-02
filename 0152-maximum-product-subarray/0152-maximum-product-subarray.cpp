class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxEnding = nums[0];
        int minEnding = nums[0];
        int answer = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            int x = nums[i];

            int product1 = maxEnding * x;
            int product2 = minEnding * x;

            maxEnding = max(x, max(product1, product2));
            minEnding = min(x, min(product1, product2));

            answer = max(answer, maxEnding);
        }

        return answer;
    }
};