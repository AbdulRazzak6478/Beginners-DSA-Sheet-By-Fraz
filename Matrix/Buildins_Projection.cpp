int projectionArea(vector<vector<int>> &grid)
{
    // Write your code here.
    int xy = 0, yz = 0, zx = 0;
    for (int i = 0; i < grid.size(); i++)
    {
        int n = 0;
        for (int j = 0; j < grid[i].size(); j++)
        {
            if (grid[i][j] > n)
                n = grid[i][j];
            if (grid[i][j] > 0)
                xy++;
        }
        yz += n;
    }
    for (int i = 0; i < grid[0].size(); i++)
    {
        int m = 0;
        for (int j = 0; j < grid.size(); j++)
        {
            if (grid[j][i] > m)
                m = grid[j][i];
        }
        zx += m;
    }
    return xy + yz + zx;
}