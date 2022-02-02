class Solution {
public:
    void merge(vector<int>& arr1, int m, vector<int>& arr2, int n) {
        /*
         //    Approache : 1
    //        TC : O(M+N)
    //        SC : O(1)
    int i=m-1,j=n-1,k=m+n-1;
    while(j>=0)
    {
        if(i>=0&&arr1[i]>arr2[j])
        {
            arr1[k--]=arr1[i--];
        }
        else
        {
            arr1[k--]=arr2[j--];
        }
    }
    // return arr1;
	*/

    // 	Approache : 2
    //         TC : O(M+N)
    //         SC : O(M+N)
    int res[m+n];
    int i=0,j=0,l=0;
    while(i<m&&j<n)
    {
        if(arr1[i]<arr2[j])
        {
            res[l++]=arr1[i++];
        }
        else{
            res[l++]=arr2[j++];
        } 
    }
    while(i<m)
    {
        res[l++]=arr1[i++];
    }
    while(j<n)
    {
        res[l++]=arr2[j++];
    }
    for (int i = 0; i < m+n; i++)
    {
        arr1[i]=res[i];
    }
    // return arr1;
    
    }
};