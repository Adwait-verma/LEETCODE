class Solution {
public:

    int dfs(vector<vector<int>>& grid, int i, int j)
    {
        // Invalid cell or water
        if (i < 0 || i >= grid.size() ||
            j < 0 || j >= grid[0].size() ||
            grid[i][j] == 0)
        {
            return 0;
        }

        // Mark as visited
        grid[i][j] = 0;

        // Current cell + all connected land
        return 1
             + dfs(grid, i - 1, j)  // up
             + dfs(grid, i + 1, j)  // down
             + dfs(grid, i, j - 1)  // left
             + dfs(grid, i, j + 1); // right
    }

    int maxAreaOfIsland(vector<vector<int>>& grid)
    {
        int maxi = 0;

        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid[0].size(); j++)
            {
                if (grid[i][j] == 1)
                {
                    int area = dfs(grid, i, j);

                    maxi = max(maxi, area);
                }
            }
        }

        return maxi;
    }
};