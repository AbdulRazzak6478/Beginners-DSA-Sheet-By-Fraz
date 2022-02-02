int findDuplicate(vector<int> &arr)
{

    //     	Approache 1:
    //         	TC : O(N)
    //             SC : O(1)
    int ans = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        ans = ans ^ arr[i];
    }

    for (int i = 1; i < arr.size(); i++)
    {
        ans = ans ^ i;
    }
    return ans;

    //     Write your code here
    /*
//     Approache 2:
//      TC : O(N)
//      SC : O(N)
    vector<int>ans(arr.size());
    for(int i=0;i<arr.size();i++)
    {
        ans[arr[i]]++;
        if(ans[arr[i]]==2)
        {
            return arr[i];
        }
    }
     */
}