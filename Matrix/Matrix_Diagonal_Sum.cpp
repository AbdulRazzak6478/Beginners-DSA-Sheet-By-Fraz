class Solution
{
public:
    int diagonalSum(vector<vector<int>> &mat)
    {
        int n = mat.size();
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                // if(j>=n/2)break;
                if (j == i)
                {
                    sum += mat[i][j];
                    if (j != n - i - 1)
                    {
                        sum += mat[i][n - i - 1];
                        // corresponding to the i^th row we are taking its diagonal elements from start and end
                    }
                    break;
                }
            }
        }
        return sum;
    }
};