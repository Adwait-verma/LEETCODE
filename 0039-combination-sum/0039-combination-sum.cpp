class Solution {
public:
    vector<vector<int>> ans;
    vector<int> temp;

    void dfs(int index, vector<int>& candidate, int target)
    {
        if (target == 0)
        {
            ans.push_back(temp);
            return;
        }

        if (index == candidate.size())
            return;

        // Pick
        if (candidate[index] <= target)
        {
            temp.push_back(candidate[index]);
            dfs(index, candidate, target - candidate[index]); // stay at same index
            temp.pop_back();
        }

        // Don't Pick
        dfs(index + 1, candidate, target);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target)
    {
        dfs(0, candidates, target);
        return ans;
    }
};