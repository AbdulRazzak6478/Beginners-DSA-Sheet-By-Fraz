bool isPerfectSquare(long long n)
{
    if (n == 1)
        return true;
    long long s = 1, e = n, mid;
    while (s <= e)
    {
        mid = s + (e - s) / 2;
        if (n == mid * mid)
            return true;
        else if (mid * mid < n)
            s = mid + 1;
        else
            e = mid - 1;
    }
    return false;
    // Approache 2:
    //     long long  i;
    // 	for(i=1;i*i<=n;i++)
    //     {
    //         if(i*i==n)
    //             return true;
    //     }
    //     return false;
}