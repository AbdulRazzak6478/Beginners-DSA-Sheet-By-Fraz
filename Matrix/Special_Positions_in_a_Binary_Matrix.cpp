class Solution
{
public:
    bool checkSpecialOnes(vector<vector<int>> &mat, int m, int n, int i, int j)
    {
        int row = i;
        int col = j;
        while (row < m - 1)
        {
            row++;
            if (mat[row][j] == 1)
                return false;
        }
        while (col < n - 1)
        {
            col++;
            if (mat[i][col] == 1)
                return false;
        }
        int upr = i;
        while (upr > 0 && upr < m)
        {
            upr--;
            if (mat[upr][j] == 1)
                return false;
        }
        int lcs = j;
        while (lcs > 0)
        {
            lcs--;
            if (mat[i][lcs] == 1)
                return false;
        }
        return true;
    }
    int numSpecial(vector<vector<int>> &mat)
    {
        int m = mat.size();
        int n = mat[0].size();
        int count = 0;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (mat[i][j] == 1)
                {
                    if (checkSpecialOnes(mat, m, n, i, j))
                        count++;
                }
            }
        }
        return count;
    }
};