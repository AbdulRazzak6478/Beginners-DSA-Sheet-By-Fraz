#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n)
{

    // Write your code here.

    // moore's Voting algorithm Approche : 1 TC : O(N)

    int element = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (count == 0)
            element = arr[i];
        if (element == arr[i])
            count++;
        else
            count--;
    }
    int ct = 0;
    for (int i = 0; i < n; i++)
    {
        if (element == arr[i])
            ct++;
    }
    if (ct > (n / 2))
    {
        return element;
    }
    else
        return -1;

    /*
        Approache 2:
            TC : O(N)
            SC : O(N)
       unordered_map<int,int>m;

       for(int i =0;i<n;i++){

           m[arr[i]]++;

       }

       for(auto it : m){

           if(it.second>(n/2)){

               return it.first;

           }

       }
       return -1;
        */
}