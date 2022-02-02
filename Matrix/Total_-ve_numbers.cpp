int countNegativeNumbers(vector<vector<int>> &mat)
{
    // Write your code here.
    /*
    int total = 0;
   for(int i =0;i<mat.size();i++){
       int l = upper_bound(mat[i].rbegin(),mat[i].rend(),-1)-mat[i].rbegin();
       total+=l;
   }
   return total;
       */
    int count = 0;
    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = 0; j < mat[i].size(); j++)
        {
            if (mat[i][j] < 0)
            {
                count++;
            }
        }
    }
    return count;
}