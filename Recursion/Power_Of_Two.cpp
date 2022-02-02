#include <cmath>
bool isPowerOfTwo(int n)
{
    // Write your code here
    int x = log2(n);
    if (n == pow(2, x))
        return true;
    return false;
    /*
//     Approache 2:
//     TC : log(N)
//     SC : log(N)
   if(n==1)return true;
    if(n%2==0)
        return isPowerOfTwo(n/2);
    return false;
    */
}