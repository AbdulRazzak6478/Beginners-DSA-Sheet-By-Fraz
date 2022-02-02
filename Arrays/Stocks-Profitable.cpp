// int maximumProfit(vector<int> &prices){
//     // Write your code here.
//     int buyStock=prices[0];
//     int maxp=0;
//     for(int i=1;i<prices.size();i++)
//     {
//         if(prices[i]<buyStock)
//         {
//             buyStock=prices[i];
//         }
//         else
//         {
//             maxp=max(maxp,prices[i]-buyStock);
//         }
//     }
//     return maxp;
// }

int maximumProfit(vector<int> &prices)
{
    long long int profit = 1000000000;
    int maxProfit = 0;
    for (int i = 0; i < prices.size(); i++)
    {
        if (prices[i] < profit)
        {
            profit = prices[i];
        }
        else if (prices[i] - profit > maxProfit)
        {
            maxProfit = prices[i] - profit;
        }
    }
    return maxProfit;
}