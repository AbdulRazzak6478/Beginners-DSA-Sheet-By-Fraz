class Solution
{
public:
    string sortSentence(string s)
    {
        vector<string> v(9 + 1, "0");
        string res = "";
        int i;
        int count = 0;
        for (i = 0; i < s.size(); i++)
        {
            if (s[i] != ' ')
            {
                res += s[i];
            }
            else
            {
                char c = s[i - 1];
                v[c - '0'] = res.substr(0, res.size() - 1);
                res = "";
                count++;
            }
        }
        char c = s[s.size() - 1];
        v[c - '0'] = res.substr(0, res.size() - 1);
        count++;
        //   cout<<count;
        string ans = "";
        for (int i = 0; i < 9 + 1; i++)
        {
            if (v[i] != "0")
            {
                if (count == 1)
                {
                    ans += v[i];
                    break;
                }
                ans += v[i];
                ans += ' ';
                count--;
                // cout<<v[i]<<" " ;
            }
        }

        return ans;
    }
};
