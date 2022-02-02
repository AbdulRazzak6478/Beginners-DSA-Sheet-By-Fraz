string reverseString(string str)
{
    // Write your code here.
    int n = str.size();
    for (int i = 0; i < n; i++)
    {
        if (i < n / 2)
        {
            char temp = str[i];
            str[i] = str[n - i - 1];
            str[n - i - 1] = temp;
        }
    }
    return str;
    /*
    string ans="";
    for(int i=str.size()-1;i>=0;i--)
    {
        ans+=str[i];
    }
    return ans;
    */
}