int findPeak(vector<int> &arr)
{
    // Write your code here

    int s = 0;
    int e = arr.size() - 1;
    int mid = s + (e - s) / 2;

    while (s < e)
    {
        if (arr[mid] < arr[mid + 1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return arr[s];
}
//     int n=arr.size();
//     int s=0,e=n-1;
//     while(s<=e)
//     {
//         int mid=s+(e-s)/2;
//         if(arr[mid]<arr[mid-1])
//             e=mid;
//         else if(arr[mid]<arr[mid+1])
//             s=mid+1;
//         else
//             return arr[mid];
//     }
//     return 0;
// }
