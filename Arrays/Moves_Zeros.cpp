void moveZerosToLeft(int *arr, int n)
{
    // Write your code here

    //     Approche 1:
    //     TC: O(N)
    //     SC : O(1)
    int i = n - 1, j = n - 1;
    while (i >= 0)
    {
        if (arr[i] == 0)
        {
            i--;
        }
        else
        {
            arr[j] = arr[i];
            i--;
            j--;
        }
    }
    while (j >= 0)
    {
        arr[j] = 0;
        j--;
    }

    /*
//      Approche 2:
//      	TC : O(N)
//         SC :O(N)
    int ans[n];
    int l=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            ans[l++]=arr[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            ans[l++]=arr[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        arr[i]=ans[i];
    }
    */
}
