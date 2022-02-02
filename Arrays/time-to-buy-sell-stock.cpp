
// class Solution
// {
// public:
//     int maxProfit(vector<int> &arr)
//     {

//         // Optimal :
//         //  TC : O(N)
//         //  SC : O(1)
//         int maxp = 0;
//         int currbuy = arr[0];
//         int n = arr.size();
//         for (int i = 1; i < n; i++)
//         {
//             if (arr[i] < currbuy)
//             {
//                 currbuy = arr[i];
//             }
//             else
//             {
//                 maxp = max(maxp, arr[i] - currbuy);
//             }
//         }
//         return maxp;

//         /*
//         //bettet Approache :
//             // TC : O(N)
//             // SC : O(N)
//         int maxProfit1 = 0;
//         int n = arr.size();
//         vector<int> v(n, 0);
//         for (int i = n - 1; i >= 0; i--)
//         {
//             if (i == n - 1)
//             {
//                 v[i] = arr[i];
//             }
//             else if (arr[i] > v[i + 1])
//             {
//                 v[i] = arr[i];
//             }
//             else
//             {
//                 v[i] = v[i + 1];
//             }
//         }
//         for (int i = 0; i < n-1; i++)
//         {
//             // if (v[i+1] - arr[i] > maxProfit)
//                 maxProfit1 = max(maxProfit1, v[i+1] - arr[i]);
//         }
//         return maxProfit1;
//         */

//         /*
//          // BruteForce :
//          //    TC : O(N^2)
//          int maxProfit1=0;
//          int n=arr.size();
//          for (int  i = n-1; i >= 0; i--)
//          {
//              for (int j = 0; j < n; j++)
//              {
//                  if(i==j)break;
//                  if(arr[i]-arr[j]>0)
//                  {
//                      maxProfit1=max(maxProfit1,arr[i]-arr[j]);
//                  }
//              }

//          }
//          return maxProfit1;
//          */
//     }
// };