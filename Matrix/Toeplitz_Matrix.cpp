class Solution
{
public:
    bool isToeplitzMatrix(vector<vector<int>> &matrix)
    {
        for (int i = 0; i < (matrix.size() - 1); i++)
        {
            for (int j = 0; j < (matrix[i].size() - 1); j++)
            {
                int x = i, y = j, temp;
                temp = matrix[x][y];
                x++, y++;
                while (x < matrix.size() && y < matrix[i].size())
                {
                    if (temp != matrix[x][y])
                        return false;
                    x++;
                    y++;
                } // end while
                if (x > y)
                    break;
            } // end for
        }     // end for
        return true;
    }
    /*
    bool checkElement(vector<vector<int>>& matrix,int m,int n,int i,int j,int ele)
    {
        while(i<m-1&&j<n-1)
        {
            i++;
            j++;
            if(matrix[i][j]!=ele)
            {
                return false;
            }
        }
        return true;
    }
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                int ele=matrix[i][j];
                if(checkElement(matrix,m,n,i,j,ele))
                {
                    continue;
                }
                else
                {
                    return false;
                }
            }
        }
        return true;
    }
*/
};