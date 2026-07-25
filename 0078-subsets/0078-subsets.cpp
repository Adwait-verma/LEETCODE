class Solution {
public:
    vector<vector<int>> ans;
    vector<int> curr;

    void dfs(vector<int>& nums, int idx) {
        if (idx == nums.size()) {
            ans.push_back(curr);
            return;
        }

        // Include current element
        curr.push_back(nums[idx]);
        dfs(nums, idx + 1);

        // Backtrack
        curr.pop_back();

        // Exclude current element
        dfs(nums, idx + 1);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        dfs(nums, 0);
        return ans;
    }
};