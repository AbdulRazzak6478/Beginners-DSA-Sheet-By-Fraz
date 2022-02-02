class Solution
{
public:
    vector<int> luckyNumbers(vector<vector<int>> &matrix)
    {
        int row = matrix.size();
        int col = matrix[0].size();
        vector<int> ans;
        for (int i = 0; i < row; i++)
        {
            int minele = INT_MAX, index;
            for (int j = 0; j < col; j++)
            {
                if (matrix[i][j] < minele)
                {
                    minele = matrix[i][j];
                    index = j;
                }
            }
            int flag = 1;
            // if(i==row-1)
            for (int k = 0; k < row; k++)
            {
                if (minele < matrix[k][index])
                {
                    flag = 0;
                    break;
                }
            }
            if (flag)
            {
                ans.push_back(minele);
            }
        }
        return ans;
    }
};