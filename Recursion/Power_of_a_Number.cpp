long long Pow(int X, int N)
{
    // Write your code here.
    
//      Approache 1:
//      	TC : O(log(N))
//         SC : O(log(N))
    if(N==0)return 1;
    if(N==1)return X;
    long long halfPow=Pow(X,N/2);
    if(N%2==0)
        return halfPow*halfPow;
    else
        return X*halfPow*halfPow;
        
    /*
    Approache 2:
    	TC : O(N)
        SC : O(N);
    if(N==0)
        return 1;
    long long prevPower=Pow(X,N-1);
    return X*prevPower;
//     return ans;
*/
}