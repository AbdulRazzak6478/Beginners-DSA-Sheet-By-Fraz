
class Solution
{
public:
    bool halvesAreAlike(string s)
    {
        int mid = s.size() / 2;
        int a = 0, b = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (i < mid)
            {
                if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
                {
                    a++;
                }
            }
            else
            {
                if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
                {
                    b++;
                }
            }
        }
        return (a == b) ? true : false;
    }
};