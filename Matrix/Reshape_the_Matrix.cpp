class Solution
{
public:
    vector<vector<int>> matrixReshape(vector<vector<int>> &mat, int r, int c)
    {
        int row = mat.size();
        int col = mat[0].size();
        if (row * col != r * c || c == 0 || row == 0)
            return mat;
        int rowIndex = 0, colIndex = 0;
        vector<vector<int>> ans(r, vector<int>(c));
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (colIndex == c)
                {
                    colIndex = 0;
                    rowIndex++;
                    ans[rowIndex][colIndex] = mat[i][j];
                    colIndex++;
                }
                else
                {
                    ans[rowIndex][colIndex] = mat[i][j];
                    colIndex++;
                }
            }
        }
        return ans;
    }
};