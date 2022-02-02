class Solution
{
public:
    //Approache :1
    vector<int> getRow(int rowIndex)
    {
        vector<vector<int>> ans(rowIndex + 1);
        vector<int> res;
        for (int i = 0; i < rowIndex + 1; i++)
        {
            ans[i].resize(i + 1);
            ans[i][0] = 1;
            ans[i][i] = 1;
            for (int j = 1; j < i; j++)
            {
                // previous row values
                ans[i][j] = ans[i - 1][j - 1] + ans[i - 1][j];
            }
        }
        // for(int i=0;i<ans.size();i++)
        // {
        //     if(i==rowIndex){
        //        for(int j=0;j<=i;j++)
        //        {
        //            res.push_back(ans[i][j]);
        //        }
        //     }
        // }
        for (int i = 0; i <= rowIndex; i++)
        {
            res.push_back(ans[rowIndex][i]);
        }
        return res;
    }

    // Approache 2 : 

    // int fact(int n)
    // {
    //     int f=1;
    //     for(int i=1;i<=n;i++)
    //     {
    //         f=f*i;
    //     }
    //     return f;
    // }
    // vector<int> getRow(int rowIndex) {
    //     vector<int>ans;
    //     for(int i=0;i<=rowIndex;i++)
    //     {
    //         int val=fact(rowIndex)/(fact(i)*fact(rowIndex-i));
    //         ans.push_back(val);
    //     }
    //     return ans;
    // }
};